#include<stdio.h>
int main()
{
	int primeCount = 0;
	int count = 0;
	int num = 2;
	while (primeCount < 10001)
	{
		for (int i = 1;i <= num / 2;i++)
		{
			if (num % i == 0)
			{
				count++;
			}
			if (count > 1)
			{
				break;
			}
		}
		if (count == 1)
		{
			primeCount++;
		}
		num++;
		count = 0;
	}
	printf("%d", num - 1);
}