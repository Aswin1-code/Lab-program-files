#include<stdio.h>
int main()
{ 
   int n,r,rev=0,original;
   printf("Enter a Number:");
   scanf("%d",&n);
   original=n;
      while(n>0)
   { 
      r=n%10;
      rev=rev+(r*r*r);
      n=n/10;
   } 
    if(original==rev)
    {
       printf("\n It is an Amstrong Number");
    }
    else
    { 
       printf("\nIt is not an Amstrong Number");
    } 
     return 0;
}     
