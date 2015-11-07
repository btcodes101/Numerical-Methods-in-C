//14.Bisection Method of root finding

#include<stdio.h>

    float f(float x)
    {
    return ((x*x*x)-(5*x)+1);
    }

int main()
{
    float a,b;
    printf("enter a :\n");
    scanf("%f",&a);

    printf("enter b :\n");

    scanf("%f",&b);
printf("enter the number of iterations ");
int p=0;
scanf("%d",&p);
    float mid = (a+b)/2;
    float fa,fb;
    int k=0;
    while(k<=p)
    {
    mid = (a+b)/2 ;
    if(f(mid)<0)
    b = mid;

    else
    a = mid;
   
    k++;
    }

    printf("root is %f ",b);

    return 0;
}