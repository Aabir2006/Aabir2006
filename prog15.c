#include <stdio.h>

unsigned int factorial(unsigned int n) 
{
    if (n == 0) 
        return 1;
    return n * factorial(n - 1);
}

int main() 
{
    printf("Enter no: ");
	int num;
	scanf("%d",&num); 
    printf("Factorial of %d is %u\n", num, factorial(num));
    return 0;
}

