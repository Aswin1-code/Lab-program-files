#include<stdio.h>
int main()
{
   float a,b,c;
   printf("\t\tWelcome");
   printf("\nC PROGRAM TO FIND THE  MAXIMUM OF 3 NUMBERS ");
   printf("\nEnter 3 numbers separated by spaces :");
   scanf("%f %f %f",&a,&b,&c);
   if(a>b&&a>c)
   {
      printf("\n%0.2f is maximum among %0.2f %0.2f %0.2f",a,a,b,c);
   }
   else if(b>a&&b>c)
   { 
      printf("\n%0.2f is maximum among %0.2f %0.2f %0.2f",b,a,b,c);
   }
   else
   { 
      printf("\n%0.2f is maximum among %0.2f %0.2f %0.2f",c,a,b,c);
   }
   
   return 0;
}   
