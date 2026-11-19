#include<stdio.h>
int main()
{
FILE*FP;
int ch;
FP=fopen("text.txt","w");
if(FP==NULL)
{
printf("File opening failed\n");
return 1;
}
fprintf(FP,"ABOUT C PROGRAMMING\n");
fprintf(FP,"1.The C programming classes are very useful\n");
fprintf(FP,"2.C is the basic fundamental to learn any other programming language\n");
fprintf(FP,"3.C is a syntax based language\n");
fprintf(FP,"4.C is easy to learn\n");
fprintf(FP,"5.C created an intrest in learning more programming successfullu\n");
fclose(FP);

printf("Data Added Successfully\n");
FP=fopen("text.txt","a");
if(FP==NULL)
{
printf("File opening failed\n");
return 1;
}
fprintf(FP,"\ABOUT C PROGRAMMING TRAINER\n");
fprintf(FP,"1.The Trainer explains the concept clearly\n");
fprintf(FP,"2.The Trainer clears the doubtly seperatly\n");
fprintf(FP,"3.He gives more real-time examples\n");
fclose(FP);

printf("Data Appended successfully\n");
FP=fopen("text.txt","r");
if(FP==NULL)
{
printf("File opening failed\n");
return 1;
}
while((ch=fgetc(FP))!=EOF)
{
printf("%c",ch);
}
fclose(FP);
return 0;
}
