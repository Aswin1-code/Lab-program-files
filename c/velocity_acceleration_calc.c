#include<stdio.h>
main()
{ 
   // C PROGRAM TO FIND ACCELERATION BY GETTING DISPLACEMENT AND TIME AS INPUT

   float d,t,a,v;

   printf("Enter the value of displacement and time : ");

   scanf("%f %f",&d,&t);

   v = d/t;    // FINDING VELOCITY

   a = v/t;    // FINDING ACCELERATION

   printf("\nThe acceleration is %f and the velocity is %f",a,v);


}
