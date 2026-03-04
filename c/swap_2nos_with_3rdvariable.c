
          // C PROGRAM TO SWAP 2 NUMBERS

#include<stdio.h>
main()
{ 
   float a,b,temp;
   printf(" Enter the value of 2 numbers separated by spaces :");
   scanf("%f %f",&a,&b);
   temp = a;
   a = b;
   b = temp;
   printf("\n the value of numbers after swaping is a = %f and b = %f",a,b);
}
