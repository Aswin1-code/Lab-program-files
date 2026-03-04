#include<stdio.h>
#include<stdlib.h>

void main()
{
   FILE *fptr;
   char filename[100];
   char ch;
   
   printf("Enter the file name\n");
   scanf("%s",filename);
   fptr=fopen("calculator_program.c","r");
   if(fptr==NULL)
   {
      printf("Cannot open a file\n");
   }
   ch=fgetc(fptr);
   while(ch!=EOF)
   {
      printf("%c",ch);
      ch=fgetc(fptr);
   }
   fclose(fptr);
}
      
   
