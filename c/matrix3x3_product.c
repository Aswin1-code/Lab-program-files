#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3],i,j,r1,r2,c1,c2,k;
   printf("Enter the size A matrix :");
   scanf("%d %d",&r1,&c1);
   printf("\nEnter the size of B matrix :");
   scanf("%d %d",&r2,&c2);
   printf("\nEnter A matrix elements :");
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
	 scanf("%d",&a[i][j]);
      }
   }
   printf("\nEnter B matrix elements :");
   for(i=0;i<r2;i++)
   {
      for(j=0;j<c2;j++)
      {
	 scanf("%d",&b[i][j]);
      }
   }
  
        for(i=0;i<r1;i++)
     {
        for(j=0;j<c2;j++)
	{
	 c[i][j]=0;
	 for(k=0;k<r1;k++)
	 {
	    c[i][j]=c[i][j]+a[i][k]*b[k][j];
	 }
	}
     }
  
  printf("\nThe product is \n");
  for(i=0;i<3;i++)
     {
	for(j=0;j<3;j++)
	{
	   printf("%d\t",c[i][j]);
	}
	printf("\n");
     }
  return 0;
}

