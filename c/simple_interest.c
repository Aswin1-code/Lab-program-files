#include<stdio.h>
main()
{
   float p,n,r,a;
   printf("\t\tWELCOME ");
   printf("\nEnter the principle,number of years and rate of interest separated by spaces :");
   scanf("%f %f %f",&p,&n,&r);
   a = p*n*r;
   
   printf("\n\tsimple interest is %f ",a/100);
}   
