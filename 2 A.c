#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("enter values of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0)
    {
        printf("imaginary roots");
    }
    else if(d==0)
    {
        r1=-b/2*a;
        printf("roots are real and equal");
        printf("%f",r1);
    }
    else
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("%f %f ",r1,r2);
    }
}
