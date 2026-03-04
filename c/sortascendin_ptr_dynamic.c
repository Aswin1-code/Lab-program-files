#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sort(int,char*name[]);
int main()
{
   
   char*name[20],t[50];
   int i,n,j;
   printf("\nEnter no.of students in the class :");
   scanf("%d",&n);
   printf("\nEnter the name of students one by one :");
   for(i=0;i<n;i++)
   {
      name[i]=(char*)calloc(20,sizeof(char));
      scanf("%s",name[i]);
   }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(strcmp(name[i],name[j])>0)
        {  
          strcpy(t,name[i]);
          strcpy(name[i],name[j]);
          strcpy(name[j],t);
	}
      }
    }
   printf("\nSorted names are");
   for(i=0;i<n;i++)
   {
      printf("\n%s",name[i]);
   }
   return 0;
}



