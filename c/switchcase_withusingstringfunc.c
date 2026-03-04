#include<string.h>
#include<stdio.h>
int main()
{
   char a[50],b[50],c[50];
   int i=0,j=0,l=0,flag=0,choice;
   printf("Enter a string ");
   scanf("%s",a);
   printf("\nEnter your choice");
   printf("\n1.Length of the string");
   printf("\n2.Copy one string to another");
   printf("\n3.String concatination");
   printf("\n4.String comparison");
   printf("\nYour choice is ");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 printf("\nThe length of the string is %d",strlen(a));
         break;

      case 2:
        printf("\nThe original string is %s",a);
	printf("\nThe copied string is %s",strcpy(b,a));
        break;

      case 3:
        printf("\nEnter a another string ");
	scanf("%s",c);
	printf("\nThe concatinated string is %s",strcat(a,c));
	break;
         
      case 4:
	printf("\nEnter the string:");
	scanf("%s",c);
	if(strcmp(a,c)==0)
	{
	   printf("\nBoth the strings are equal");
	}
	else
	{
	   printf("\nBoth the strins are not equal");
	}
	break;
      default:
	      printf("\nEnter a VALID INPUT choice");

   }
   return 0;
}
