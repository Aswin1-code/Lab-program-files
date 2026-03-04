#include<stdio.h>
int main()
  {
     char a[50],b[50];
     int i=0,j=0,l=0,flag=0,choice;
     printf("Enter a String");
     scanf("%s",a);
     printf("\nEnter the choice :");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
	   for(i=0;a[i]!=0;i++)
	   {
	     l++;
           }
           printf("\nLength of the string is %d",l);
	   break;
			         
       case 2:
	   for(i=0;a[i]!='\0';i++)
           {
	      l++;
           }
	   for(i=0;i<l;i++)
	   {
	    b[i]=a[i];
           }
	   printf("\nThe original string is %s",a);
	   printf("\nThe copied string is %s",b);
	   break;
				     
        case 3:
	   printf("\nThe reverse of the string is ");
	   for(i=0;a[i]!='\0';i++)
	   {
	      l++;
	   }
	   for(i=l;i>=0;i--)
	   {			  
	   printf("%c",a[i]);
	   }
           break;
		       
        case 4:
	   for(i=0;a[i]!='\0';i++)
           {
	      l++;
	   }
           for(i=0;i<l;i++)
           {
	      if(a[i]=a[l-i-1])
	     {
	      flag=1;
	     }
	   }
	      if(flag==0)
	      {
		 printf("\nIt is palindrome");
              }   
	      else 
	      { 
		 printf("\nIt is not a palindrome");
	      }
	      break;
	      default:
	          printf("\nYour choice is invalid");
	}
	return 0;
}
