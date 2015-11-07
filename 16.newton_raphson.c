//16. Newton Raphson Method

#include<stdio.h>
#include<math.h>

float f(float x)
return (expf(x) - 3*x);

float der(float x)
{
return expf(x)-3 ;
}


int main()
{
float m,a,ans;
int k=0,i;
printf("enter initial value \n");
scanf("%f",&a);

printf("enter no of iterations  \n");
scanf("%d",&i);

while(k<=i)
{
ans  = ans  - (f(start) / der(start));
k++;
}
printf(" ans  = %f",ans);
return 0;
}
 