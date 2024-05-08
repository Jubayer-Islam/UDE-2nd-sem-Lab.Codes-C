#include <stdio.h> ////Task 8
#include <stdlib.h>
#define ARR_MAX 2

int compVecLen(int v1[], int v2[], int n)

{
     long v1Len = 0, v2Len= 0;
     for (--n; n >=0; n-- )
     {
     v1Len = (long)v1[n] * (long)v1[n] + v1Len;
     v2Len = (long)v2[n] * (long)v2[n] + v2Len;
     }

 if (v1Len == v2Len)
    return 0;
 if (v1Len >  v2Len)
    return 1;
    return 2;//v1Len < v2Len
}

void addVec(int *v1, int *v2, int n)
{
        for(int j=0;j<n;j++)
    { *(v1) = *v1 + *v2; v1++; v2++;}      //v1[j] = v1[j] + v2[j];  // *(v1+j) = *(v1+j) + *(v2+j);
}
 int main()

  {
      int v1Arr[ARR_MAX],v2Arr[ARR_MAX],i=0;
      char coCh[] = {'=','>','<'} ;

       do{
       printf("\nPlease, input x%d:",i+1);
        scanf("%d",&v1Arr[i]); printf("Please, input y%d:",i+1);
        scanf("%d",&v2Arr[i]);
    }while(++i < ARR_MAX);

    fflush(stdin); // deals with unnecessary spacebar in scanf which would cause scanning error
   i = compVecLen(v1Arr, v2Arr, ARR_MAX);
    printf("\n|V1| %c |V2|",coCh[i]);
   addVec(v1Arr, v2Arr, ARR_MAX);

   printf("\nSum of x,y =");
   for (i=0; i < ARR_MAX; i++ )
    { printf("%d, ",v1Arr[i]);}
    return EXIT_SUCCESS;
    }
