#include <stdio.h>
int main()
{
	int a,b,gcd,lcm,i=1;
	printf("Enter two numbers");
	scanf("%d %d", &a,&b);
	while(i<=a&&i<=b)
	{
		if(i<=a&&i<=b)
		{
			if(a%i==0&& b%i==0)
			gcd=i;
		}
		i++;
		
	}
	printf("%d",gcd);
}
