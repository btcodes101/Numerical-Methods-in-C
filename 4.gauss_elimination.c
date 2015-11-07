// 4. Gauss Elimination

#include<stdio.h>
int main()

{

int i,j,k,n;
float x[30],a[30][30],c[30];
printf("enter value of n \n");

scanf("%d",&n);

printf("enter the RHS values");

for(i=0;i<n;i++)
scanf("%f",&c[i]);
printf("enter the coefficients");

for(i=0;i<n;i++)
{
for(i=0;i<n;i++)
{

scanf("%f",&a[i][j]);
}
}

for(k=0;k<n-1;k++)
{
for(i=k+1 ; i<n ; i++)
{
for(j = k+1 ; j<n ; j++)
{
a[i][j] = a[i][j] - (a[i][k] / a[k][k]) * a[k][j];
c[i] = c[i]  - (a[i][k] / a[k][k])*c[k];
}
}
x[n-1] = c[n-1] / a[n-1][n-1] ;
printf("solution \n");

printf("x[%d] = %f \n",n-1,x[n-1];

for(k=0;k<n-1 ; k++)
{
i = k-2;
for(j=i+1;j<n;j++)
{
c[i] = c[i]  - (a[i][j] * x[j]) ;
x[i] = c[i] /  (a[i][j]) ;
printf("x[%d] = %f \n",i,x[i]);

}
}

return 0;
}