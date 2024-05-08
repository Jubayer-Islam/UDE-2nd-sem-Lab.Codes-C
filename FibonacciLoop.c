
#include <stdio.h>

int fibo(int max)
{
        int first = 0, second = 1, next, count;

   for ( count = 0 ; count < max ; count++ )
    {
      if ( count <= 1 )
         next = count;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }
}


int main()

 {
    int  max;
    printf("Please enter number of fibonacci terms you want to print:\n");
      scanf("%d",&max);
    printf("Fibonacci series\n");
        fibo(max);
    return 0;

}


