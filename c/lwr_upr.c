#include<string.h>
#include<stdio.h>
int main()
{
  char a[50],b[50];
  printf("Enter a string :");
  scanf("%s",a);
  b=strupr(a);
  printf("the upper case for %s is %s",a,b);
  return 0;
}
