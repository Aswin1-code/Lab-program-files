#include<stdio.h>
int factorial(int);
int main()
{
   int f,n;
   printf("Enter the number for finding its factorial :");
   scanf("%d",&n);
   f=factorial(n);
   printf("\nFactorial of %d is %d",n,f);
}
int factorial(int n)
{
   int temp;
   if(n==0)
      return 1;
   else
      temp=n*factorial(n-1);
   return temp;
}
