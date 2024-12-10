#include <stdio.h>
int main()
	{
		printf("Enter a no: ");
		int i,n,rev=0;
		scanf("%d",&n);
		i=n;
		while(i!=0)
		{
			rev=(rev*10)+(i%10);
			i=i/10;
		}
		if(rev==n)
		printf("Palindrome");
		else
		printf("Not a palindrome");
	}

