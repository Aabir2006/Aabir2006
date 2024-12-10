#include <stdio.h>
int main()
{
	int i,j, a[3][3];
	printf("THE PATTERN IS: \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
