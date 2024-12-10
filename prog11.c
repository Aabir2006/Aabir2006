#include <stdio.h>
int main()
	{
		printf("Enter a no: ");
		int i,n,t1=0,t2=1,t3;
		scanf("%d",&n);
		printf("0,");
		for(i=2;i<n;i++)
		{
			t3=t1+t2;
			t2=t1;
			t1=t3;
			printf("%d,",t3);
			}	
	}

