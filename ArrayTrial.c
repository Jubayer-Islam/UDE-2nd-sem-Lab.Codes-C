#include<stdio.h>
#include<stdbool.h>
int main (void)

{   printf("This is example of \"bool\" type\n");
    bool arr[3]={true,false,false};
     printf("%d\n",arr[0]);

    printf("CODING AFTER 2Y beautiful\n");


    printf("array of strings:\n");
    char arr_of_string[5][11]={"ab","wddww","adac","aaa","vvv"}; //5 strings, each up-to 10 character size
 printf("%s\n",arr_of_string[2]);
    int val;


    int attendance[3][2];

   /* for(int i=0;i<3;i++)
    {
        printf("enter matrikel Nr. and attendance (1/0) of student %d:\n",i+1);
         for(int j=0;j<2;j++)
        {
            scanf("%d",&val);
            attendance[i][j]=val;
        }
    }
        printf("\n\a result:"); //alert beep!! by using \a
        for(int i=0;i<3;i++)
        {
         for(int j=0;j<2;j++)
        {
            printf("%d ",attendance[i][j]);

        }  printf(",");

        }
        printf("\"Hello there!\nWe are learning problem solving approaches with C.\""); */
}
