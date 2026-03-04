#include<stdio.h>
int main()
{
   int a,b,c,max;
   printf("Enter 3 numbers separated by spaces :");
   scanf("%d %d %d",&a,&b,&c);
   max=a>b?a>c?a:c:b>c?b:c;
   printf("\n%d is maximum",max);
   return 0;
}
