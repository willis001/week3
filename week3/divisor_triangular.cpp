#include<stdio.h>
int main()
{
	long long sum = 0;
	long long count = 0;
	long long i = 1;
	while (count <= 500)
	{
		count = 0;
		sum += i;
		i++;
		for (long long a = 1;a <= sum;a++)
		{
			if (sum % a == 0)
			{
				count++;
			}
			if (sum == a)
			{
				printf("%lld\t", sum);
				printf("%lld\n", i);
				break;
			}
		}
	}
	printf("%lld", sum);
	return 0;
}