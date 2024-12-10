#include <stdio.h>
int main()
{int i,s,j,x;
   for( i = 4; i >= 1;i--)
   {
      for( s = 0; s < i; s++)
         printf(" ");

         for( j = 4; j> i-1 ; j--)
         printf("*");

         for( x = 4; x> i ; x--)
         printf("*");


printf("\n");

   }


}
