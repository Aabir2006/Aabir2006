#include <stdio.h>
int main()
	{
		printf("Enter a no: ");
		int i=0,n,sum=0;
		scanf("%d",&n);
		while(n>0)
		{
			n=n/10;
			i++;
		}
		printf("Count is %d",i);	
	}

