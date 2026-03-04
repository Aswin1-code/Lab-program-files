
                             // C program to check vowel or consonant
#include<stdio.h>
int main()
{ 
   char a;
   printf("\nEnter an Alphabet : ");
   scanf("%c",&a);
   switch(a)
   {   
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
           printf("\n***%c is VOWEL***\n\n",a);

     break; 
               
     default:
             printf("\n***%c is CONSONANT ***\n\n",a);
   }

   return 0;

}
