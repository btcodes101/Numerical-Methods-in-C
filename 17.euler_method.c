//17. Euler Method

#include<stdio.h>

float f(float x,float y)
{
	return (x+y);
}
int main()
{
	 float x0,y0,h,xn,ans,x,y;
	 
	 printf("\nEnter x0,y0,h,xn: ");
	 scanf("%f %f %f %f",&x0,&y0,&h,&xn);
	 x=x0;
	 y=y0;
	 
	 while(x<=xn)
	 {
	 	ans  = h*f(x,y);
	 	y = y+ans;
	 	x = x+h;
	 	printf("%f   \t  %f \n",x,y);
	 }
	 
	return 0;
}