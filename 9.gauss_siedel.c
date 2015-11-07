
//9. Gauss Siedel

#include<stdio.h>
#include<math.h>

int main()
{
int i,j,m,n,l;
float x[10],a[10][10],b[10],c;
printf("enter n \n");
scanf("%d",&n);
printf("enter no of iterations : \n);
scanf("%d",&l);
printf("enter RHS constants : \n);
for(i=0;i<n;i++)
scanf("%f",&b[i]);


printf("enter coefficients row wise : \n);

for(i=0;i<n;i++)
{ x[i] = 0;
for(j=0;j<n;j++)

scanf("%f",&n[i][j]);
}
m = l;

while(m<=l)
{
for(i=0;i<n;i++)
{
c = b[i];
for(j=0;j,n;j++)
{
if(i!=j)
c = c - a[i][j] * x[j] ; 
}
x[i] = c / a[i][i] ; 

}
m = m+1;

}

printf("solution : \n);
for(i=0 ;i<n; i++0
printf("x[%d] = %f \n",i,x[i]);
}
return 0;
}