#include<stdio.h>
int main()
{

   int a,b;
   printf("\t\tWELCOME TO MY C PROGRAM\n");
   printf("Enter 2 numbers separated by spaces :");
   scanf("%d %d",&a,&b);
   a = a+b;
   b = a-b;
   a = a-b;
   printf("\n\t\tAFTER SWAPPING");
   printf("\nThe value of a = %d \nThe value of b = %d",a,b);
   return 0;
}
