#include <stdio.h>
int main()
	{
		printf("Enter a no: ");
		int i,n,sum=0;
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			sum=sum+i;
		}
		if(sum==n)
		printf("Perfect No");
		else
		printf("Not a Perfect No");	
	}

