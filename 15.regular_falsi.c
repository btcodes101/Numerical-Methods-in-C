
//15. Regular Falsi Method

#include<stdio.h>
#include<math.h>

float f(float x)
{
return (expf(x) - (3 * x*x));
}

int main()
{
int itr=0, max;
float x1,x2,x3,x4,err;
printf("\nEnter value of a, b, allowed error and max no of iterations\n");
scanf("%f %f %f %d", &x1, &x2, &err, &max); 
x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
printf("\n\nIn iteration %d, Value of x3 =\t%f",itr+1,x3);
do
{
if (f(x1)*f(x3)<0)
x2=x3;
else
x1=x3;
x4=x3;
x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
itr++;
printf("\nIn iteration %d Value of x=\t%f", itr+1,x3);
if (fabs(x4-x3)<err)
{
printf("\n\nAfter %d iteration, Root= %f", itr,x4);
return 0;
}
}
while (itr<max);
return 0;
}
