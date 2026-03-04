#include <stdio.h>
#include<math.h>
int main()
{

    int n,i,flag=1;
    printf("\t\t\tTo Check a Number is Prime or not");
    printf("\nEnter any number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
         if(n%i== 0)
	 {
	   flag=0;
	   break;
	 }
    }
         if(n==1)
	 {
              printf("\n1 is neither prime nor composite number");
	 }     
	 else
	 {   
	 if(flag==0)
	   printf("\n%d is not a prime number", n);
	 else
	   printf("\n%d is prime number", n);
         }
	 return 0;
}	  
