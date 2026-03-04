#include<stdio.h>
int main()
{
   int n,i,k,j,t=0,a[10],b,l,flag=0;
   printf("Enter the total number of elements ");
   scanf("%d",&n);
   printf("\nEnter the elements one by one ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\nEnter 1 or 2 \n1. Key value present or not in given array\n2. Count the number of occurences ");
   printf("\nYour choice is ");
   scanf("%d",&b);
   switch(b)
   {
      case 1:
   
       printf("\nEnter the element to tbe searched ");
       scanf("%d",&k);
       for(i=0;i<n;i++)
       {
	  if(a[i]==k)
	  {
	     t=1;
	  break;
	  }
       }
       if(t==1)
       {
	  printf("\nThe element is present in the array ");
       }
       else
       {
	  printf("\nThe element is not present in the array ");
       }

       break;
       
   
   case 2:
      
       
       printf("\nEnter the number to find its occurences ");
       scanf("%d",&j);
       for(i=0;i<n;i++)
       {
	  if(a[i]==j)
	  {
	     t++;
	  }
       }
       printf("\nThe number of occurences of %d is %d times",j,t);
       break;
        
   case 3:

       printf("\nthe reverse of string is ");
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
	  if(a[i]!=a[l-i-1])
	  {
	     flag=1;
	  }
       }
       if(flag==0)
       {
	  printf("\nIt is palindrome ");
       }
       else
       {
	  printf("\nIt is not a palindrome");
       }
        break;
   
   default: 
            printf("\ninvalid input");
            
   }
}
