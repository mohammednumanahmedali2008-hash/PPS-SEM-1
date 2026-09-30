#include<stdio.h>
int main()
{
   float si,p,t,r;
   printf("enter three values");

   scanf("%f %f %f",&p,&t,&r);
   si=p*t*r/100;

   printf("p=%f \n",p);
   printf("t=%f \n",t);
   printf("r=%f \n",r);
   printf("si=%f",si);
   return 0;
}
