#include <stdio.h>

int main()
{
   int a,i,n;
   printf("\t\t\tmultiplication table");
   printf("\nEnter the multiplication table of =");
   scanf("%d",&a);
   printf("\nHow many tables you need to print = ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {      
     printf("%d x %d = %d\n",a,i,a*i);
   }  
  return 0;
}

