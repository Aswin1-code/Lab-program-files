#include<stdio.h>
int main()
{
   int n,r,rev=0,original;
   printf("\t\tTO CHECK PALINDROME OR NOT:");
   printf("\nEnter a Number :");
   scanf("%d",&n);
   original=n;
   while(n>0)
   {
      r=n%10;
      rev=(rev*10)+r;
      n=n/10;
   }
   if(original==rev)
   { 
      printf("\nThe Entered Number %d is PALINDROME ",original);
   }
   else 
   {
      printf("\nThe Entered Number %d is not a **PALINDROME",original);
   }
   return 0;
}
