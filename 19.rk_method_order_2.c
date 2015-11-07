//19. R-K method of order 2

#include<stdio.h>

float f(float x,float y);
int main()
{
    float x0,y0,m1,m2,m,y,x,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        m1=h*f(x,y);
        m2=h*f((x+h),(y+m1));
        m=(m1+m2)/2;
        y=y+m;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
    
}
float f(float x,float y)
{
return x + (y*y);
}