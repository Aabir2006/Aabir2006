#include <stdio.h>
int main()
{
    for(int i=01; i<5;i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%c ", j+65);
        }
        printf("\n");
    }
}