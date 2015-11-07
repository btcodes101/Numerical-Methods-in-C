//2. Upper Triangular Matrix

#include <stdio.h>
int main()
{
float a[3][3];
int i,j,k;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%f",&a[i][j]);
}}

for(i=1;i<3;i++)
{
for(j=0;j<3;j++)
{
float pivot = - (a[i][j] / a[j][i]);

for(k=0;k<3;k++)
{

a[i][k] = a[i][k] + (a[j][k] * pivot);
}


}}

for(i=0;i<3;i++)
{
printf("\n");
for (j = 0;j<3;j++)
printf("%f",a[i][j]);
}
printf("\n %f ",a[0][0] * a[1][1] * a[2][2]);
return 0;

}
