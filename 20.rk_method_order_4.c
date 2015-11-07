
//20. R-K method of order 4

#include<stdio.h>

float f(float x,float y);
int main()
{
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        m1=h*f(x,y);
        m2=h*f((x+(h*0.5)),(y+(m1 * 0.5)));
        m3=h*f((x+(h*0.5)),(y+(m2 * 0.5)));
        m4=h*f((x+(h*0.5)),(y+(m1 * 0.5)));

        m=(m1+2*m2 + 2*m3 + m4)/6;
        y=y+m;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
return 0;
    
}
float f(float x,float y)
{
return x + (y*y);
}