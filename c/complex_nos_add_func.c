#include<stdio.h>
void complex(int,int,int,int);
void main()
{
   int x1,x2,y1,y2;
   printf("Enter real and imaginary part of C1 :");
   scanf("%d %d",&x1,&y1);
   printf("\nEnter real and imaginary part of C2 :");
   scanf("%d %d",&x2,&y2);
   complex(x1,x2,y1,y2);
}

void complex(int a,int b,int c,int d)
{
   int e,f;
   e=a+b;
   f=c+d;
   printf("\nThe Addition of 2 complex numbers are %d+i%d",e,f);
}
