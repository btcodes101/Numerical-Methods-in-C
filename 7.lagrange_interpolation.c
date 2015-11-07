//7. Lagrange Interpolation
#include<stdio.h>
int main()
{  

int n,i,j;
printf("enter n:\n");
scanf("%d",&n);

float x[100],y[100],search,ans=0;
printf("enter values \n");
for(i=0;i<n;i++)
{
    printf("enter x :\n");
    scanf("%f",&x[i]);
    printf("enter y :\n");
    scanf("%f",&y[i]);
}
printf("enter value of x for whixh y is required");
scanf("%f",&search);
for(i=0;i<n;i++)
{
float num=1,den=1;
    for(j=0;j<n ; j++)
        { if(j!=i)
              {
       
       
              num= num*(search  - x[j]);
              den = den * (x[i]-x[j]) ;
             
              }
        }
printf("%f \n",num/den);
             
              ans  = ans  + ((num*y[i])/den) ;
            printf("%f \n",ans); 
}
             
             
              printf("f[%f] = %f",search,ans);
              return 0 ;
              }
