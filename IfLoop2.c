#include <stdio.h>

int main(int argc, char **argv)
{
   int max=5;
   for(int i=0; i<max; i++)
   {
      if(i % 2 == 0)
      {
         printf("i is even : %d\n", i);
      }
      else 
      {
         printf("i is odd :  %d\n", i);
      }

      if(i == max/2)
      {
         printf("half way: exiting loop\n");
         break;
      }
   }
}

