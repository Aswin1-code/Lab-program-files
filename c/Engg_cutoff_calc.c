               // C PROGRAM TO FIND ENGINEERING CUTOFF MARKS
#include<stdio.h>
main()
{ 
   int p,c,m,a,b,d;
   printf("Enter the physics,chemistry and maths marks separated by spaces : ");
   scanf("%d %d %d",&p,&c,&m);
   a = p+c;
   b = a/2;
   d = b+m;
   printf("\nCUTOFF is =%d/200",d);
}
