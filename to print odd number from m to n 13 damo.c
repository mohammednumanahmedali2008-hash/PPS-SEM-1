#include<stdio.h>
int main()
{
    int i,m,n;
    printf("enter m value \n");
    printf("enter n value \n");
    scanf("%d",&m);
    scanf("%d",&n);
    i=m;
    do
    {
    if(i%2!=0)
    printf("%d\n",i);
    i++;
    }
    while(i<=n);
}
