#include<stdio.h>
union employee
{
   char name[20];
   int empno;
   int bp;
};
int main()
{   
   int i,n;
   float ts;
   union employee c[60];
   printf("Enter no. of employees");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\nEnter the Name\t");
      scanf("%s",c[i].name);
      printf("\nEnter the no\t");
      scanf("%d",&c[i].empno);
      printf("\nEnter the Pay\t");
      scanf("%d",&c[i].bp);
   }
   printf("\nEmployee details are");
   for(i=0;i<n;i++)
   {
      ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
      printf("\ntotal\t%0.3f",ts);
   }
}

