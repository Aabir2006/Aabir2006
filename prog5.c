#include <stdio.h>
int main()
{
	int i,j, a[3][3];
	printf("THE PATTERN IS: \n");
    for (i = 1; i <= 5; i++)
	 {
        for (j = 1; j <= 5 - i; j++) 
		{
        	printf(" ");
        }

        for (j = 1; j <= i; j++) 
		{
            printf("*");
        }

        printf("\n");
    }
}


