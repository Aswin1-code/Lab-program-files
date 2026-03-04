#include<stdio.h>
void swap(int,int);
int main()
{
   int a,b;
   printf("Enter 2 numbers separated by spaces :");
   scanf("%d %d",&a,&b);
   printf("\nBefore swapping values in main ,a=%d ,b=%d",a,b);
   swap(a,b);
}
void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
   printf("\nAfter swapping values in function a=%d, b=%d",a,b);
}
