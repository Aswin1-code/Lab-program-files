#include<stdio.h>
int main()
 {
     int a[3][3],b[3][3],c[3][3],i,j;
     printf("\nEnter A matrix elements :");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
       scanf("%d",&a[i][j]);
       }
     }
     printf("\nEnter B matrix elements :");
     for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
	 {
	 scanf("%d",&b[i][j]);
	 }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
	 {
	 
             c[i][j]=a[i][j]+b[i][j];
	   
	 }
     } 
    printf("\nThe addition of matrix is \n");
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
