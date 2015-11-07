//5. Newton's forward interpolation

#include<stdio.h>
#include<math.h>


int main()
{

float x[100],n,y[100],f;
printf("enter n \n");
scanf("%f",&n);
int i,j;
printf("enter the values of x\n");
for(i=0;i<n;i++)
{
scanf("%f",&x[i]);
}

printf("enter the values of y\n");
for(i=0;i<n;i++)
{
scanf("%f",&y[i]);
}

printf("enter the value of x for which y is needed\n");

scanf("%f",&f);


float h = x[1] - x[0] ;

printf("successive difference = %f \n",h);

float ans = y[0],p=1;
for(i=1;i<n;i++)
{
    printf("differences in iteration no %d \n",i);
    for(j=0;j<(n-i);j++)
    {
    y[j] = y[j+1] - y[j];
    printf("%f \n",y[j]);
    }
   
    p = p*(f-x[i-1]);
    float fact = 1;
    for(j=1;j<=i; j++)
    {
    fact = fact*j;
    }
    float pw=1.0;
    for(j=1;j<=i;j++)
    {
    pw=pw*h;
    }
    float den = fact * pw;
    ans  = ans + ((y[0]*p) / den);
    den=1.0;
}

printf("f[%f] = %f",f,ans);
return 0;
} 