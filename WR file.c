#include <stdio.h>
#include<string.h>
#define MAXLINELENGTH 100

/**
r  - open for reading
w  - open for writing (file need not exist)
a  - open for appending (file need not exist)
r+ - open for reading and writing, start at beginning
w+ - open for reading and writing (overwrite file)
a+ - open for reading and writing (append if file exists)
*/

int main()
{
    FILE*fp=fopen("C:/My Data/Studium/2nd semester/PP/PP lab/CodeBlocks/WR file.txt","w");

fputs("Jubayer \n",fp);
fputs("Matrikel: 1234567 \n",fp);
fputs("Address: Duisburg \n",fp);
fputs("01234567890 \n",fp);
fclose(fp);

     fp=fopen("C:/My Data/Studium/2nd semester/PP/PP lab/CodeBlocks/WR file.txt","r");
if(fp !=NULL){char a = fgetc(fp);
while (a != EOF)
    {
        printf("%c", a);
        a = fgetc(fp);
    }
fclose(fp);}
else{printf("\nError opening file!");}

// Another task
    printf("comparing two files:\n");
    char line1[50],line2[50];
    int file_lineCount = 1;
    int flag=1;

     FILE*fp1=fopen("file1.txt","r+");
     /**file 1 has
     abc
     def

     gggg
     eee
     abcDef (different here)
     sameBeyondThisPoint
     */
     FILE*fp2=fopen("file2.txt","r+");
     /**file 2 has
     abc
     def

     gggg
     eee
     abcdef (different here)
     sameBeyondThisPoint
    */
    while ((fgets(line1, MAXLINELENGTH, fp1) != NULL) && (fgets(line2, MAXLINELENGTH, fp2) != NULL))
        {
            flag = strcmp(line1,line2);
                    if(flag!=0)
                 {
                    puts("the different lines are: \n");
                    puts(line1);
                    puts(line2);
                    break;
                 }
            file_lineCount ++;
        }

    fclose(fp1);
    fclose(fp2);
                    printf("\n files differ at line %d .\n", file_lineCount);

 return 0;

}

