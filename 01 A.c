#include<stdio.h>
int main()
{
    int i,j,n,c;
    printf("enter number to generate prime number");
    scanf("%d",&n);
    c=0;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
                if(c==2)
                printf("%d\t",i);

    }
}
