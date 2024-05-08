#include<stdio.h>
int main()
{

    char mystr[10] = "Helloh";
    printf("%c \n",mystr[5]); //fifth element from string mystr
    char *strp= mystr;
    printf("%s\n",strp);   //whole string


   char str1[100];
   printf("Enter a string:");
   gets(str1); //scanf("%s ",&str1); this tangles up sequence , better avoid it
   puts(str1); // printf("1 . String = %s \n",str1);





   char str2[100];
   printf("Enter String: ");
   gets(str2); //scanf("%s ",str2);
  puts(str2);    //printf("2. String = %s \n", str2);




   char str3[100];
   printf("Enter a string: ");
    gets(str3); //scanf("%[a-z,A-Z,0-9,' '] ",str3);
   puts(str3);  // printf("3. String = %s \n",str3);

}


