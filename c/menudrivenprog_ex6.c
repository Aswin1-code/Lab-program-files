#include<stdio.h>
int main()
{
   char a[50],b[50];
   int i=0,j=0,l=0,flag=0,choice;
   printf("enter a string");
   scanf("%s",a);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 printf("length of string is %d",l);
	 break;

     case 2:
	 
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 for(i=0;i<l;i++)
	 {
	    b[j]=a[i];
	 }
	 printf("The original string is %s",a);
	 printf("The copied string is %s",b);
	 break;

     case 3:
	 printf("The reverse of the string is ");
	 for(i=0;a[i]!='\0';i++)
	 {
	    l++;
	 }
	 for(i=0;i>=0;i++)
	 {
	    printf("%c",a[i]);
	 }
	 break;

     case 4:
	 for(i=0;a[i]='\0';i++)
	 {
	    l++;
	 }
	 for(i=0;i<l;i++)
	 {
	    if(a[i]!=a[l-i-1])
	    {
	       flag=1;
	    }
	 }
	
	 if(flag==0)
	   printf("It is palindrome");
	 else
	   printf("Its not a palindrome");
	  break;

	    default:
	           printf("Invalid choice");
       } 
   return 0;
}
