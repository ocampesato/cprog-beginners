
#include <stdio.h>

int main(int argc, char **argv)
{
   int max=5;
   for(int i=0; i<max; i++)
   {
      if(i == max/2)
      {
         printf("half way: exiting loop\n");
         break;
      }
   }
}

