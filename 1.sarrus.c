//1. Sarrus Method

#include<stdio.h>
int main()
{
int a[3][3];int x=0,y=0,i,j;
printf("enter the elements in 3*3 matrix");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
}

for(i=0;i<3;i++)
{
x = x + a[0][i] * a[1][(i+1)%3] * a[2][(i+2)%3] ;
y = y + a[2][i] * a[1][(i+1)%3] * a[0][(i+2)%3] ;
}

printf("val of determinant = %d",(x-y));

return 0;

}
