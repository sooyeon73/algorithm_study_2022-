#include <stdio.h>

int gcd(int a, int b)
{
	int num = 1, min, gcd = 1;
	min = a < b ? a : b;

	while (num <= min)
	{
		if (a % num == 0 && b % num == 0)
			gcd = num;
		num += 1;
	}

	return gcd;
}
 
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	
	printf("%d\n%d", gcd(a, b), (a * b) / gcd(a, b));

	return 0;
}
