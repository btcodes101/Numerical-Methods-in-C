//18. Modified Euler Method 

#include<stdio.h>

float f(float x,float y)
{
	return (x+y);
}
int main()
{
	 float x0,y0,h,xn,ans,x,y,y_0,y_1,y_2;
	 
	 printf("\nEnter x0,y0,h,xn: ");
	 scanf("%f %f %f %f",&x0,&y0,&h,&xn);
	 x=x0;
	 y=y0;
	 
	 while(x<xn)
	 {
	 	y_0 = y+h*f(x,y);
	 	y_1 = y+h * 0.5 * (f(x,y) + f(x + h , y_0));
	 	y_2 = y+h  *0.5 * (f(x,y) + f(x + h , y_0));
	 	y = y_2;
		x = x+h;
	 	printf("%f   \t  %f \n",x,y);
	 }
	 
	return 0;
}