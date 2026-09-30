#include<stdio.h>
int main()
{
  int i,n;
  i=1;

   printf("entre the value of n:");
   scanf("%d", &n);

   printf("%d:\n",n);

   while (i <=n)
   {
   printf("%d",i);
   i++;
   }

   return 0;

}
