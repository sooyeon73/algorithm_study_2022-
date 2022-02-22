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
	int count, i,a, b,c;
    scanf("%d", &count);
    int re[count];
    for(i=0; i<count; i++){
    	scanf("%d %d", &a, &b);
	    re[i]=(a * b) / gcd(a, b);
    }
    for(i=0; i<count; i++)
        printf("%d\n", re[i]);
	return 0;
}
