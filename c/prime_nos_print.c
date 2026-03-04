#include<stdio.h>
int main()
{  
   
   int i,j,n,a[100];
   printf("how many nos");
   scanf("%d",&n);
   for(i=3;i<=n;i++)
   {
     for(j=2;j<=i;j++)
     {
	(i%j!=0)
	{
	   scanf("%d",&a[i]);
	}
	else
	   break;
     }
     continue;
   }
   printf("2,\t%d\t,",a[i]);
}
