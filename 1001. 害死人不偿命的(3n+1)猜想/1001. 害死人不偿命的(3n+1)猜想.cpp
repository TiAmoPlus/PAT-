#include<stdio.h>
int main()
{
	int n;
	int a = 0;
	scanf("%d", &n);
	while(n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;	
		}
		else 
			n = (3 * n + 1) / 2;
		printf("%d\n", n);
		a++;
		
	}
	printf("%d\n", a);
	return 0;
}