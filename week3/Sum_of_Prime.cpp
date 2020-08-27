#include<stdio.h>
int main()
{
	int num = 2;
	int check = 0;
	long long sum = 0;
	while (num < 2000000)
	{
		for (int i = 2;i <= num;i++)
		{
			if (num % i == 0)
			{
				check++;
			}
			if (check > 1)
			{
				break;
			}
		}
		if (check == 1)
		{
			sum = sum + num;
		}
		num++;
		check = 0;
	}
	printf("%lld", sum);
}
/*need time to process*/