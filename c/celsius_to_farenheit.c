#include<stdio.h>
main()
{ 
   float f,c;
   
   printf(" \t\tWelcome to my C program ");
   printf("\nEnter the value of Celsius to convert into Farenheit :");
   scanf("%f",&c);
   f = 1.8*(c+32);
   printf("\nThe Farenheit value of %0.3fcelsius is %0.3f",c,f);
}
