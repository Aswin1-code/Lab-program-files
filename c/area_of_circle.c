#include<stdio.h>
int main()
{ 
   float area,radius;
   printf("\t\tWELCOME to my C program");
   printf("\n\tC program to find the AREA of circle ");
   printf("\nEnter the Radius of circle in cm = ");
   scanf("%f",&radius);
   area = 3.14 * radius*radius;
   printf("\nArea of the circle is %0.2fsq.cms\n",area);
   return 0;
}   
