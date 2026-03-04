#include<stdio.h>
int main()
{
   int x,y,*a,*b;
   printf("\nEnter the value of x and y:");
   scanf("%d %d",&x,&y);
   printf("\nBefore swapping x= %d and y= %d",x,y);
   a=&x;
   b=&y;
   *a=*a+*b;
   *b=*a-*b;
   *a=*a-*b;
   printf("\nAfter swapping x= %d and y= %d",x,y);
   return 0;
}
