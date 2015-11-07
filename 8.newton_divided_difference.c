//8. Newtons divided difference 

#include<stdio.h>
int main()
{  

int n,i,j;
printf("enter n:\n");
scanf("%d",&n);

float x[100],y[100],search;
printf("enter values \n");
for(i=0;i<n;i++)
{
    printf("enter x :\n");
    scanf("%f",&x[i]);
    printf("enter y :\n");
    scanf("%f",&y[i]);
}
printf("enter value of x for whixh y is reqiured");
scanf("%f",&search);
float ans = y[0]; int k=0;

for(i=1;i<n;i++)
{  
    for(j=0;j<(n-i);j++)

         {
             y[j] = (y[j+1] - y[j]) / (x[j+1+k]-x[j]) ;  
           
         }
         k++;
         float prod = 1; int m=0;
         for(m=0;m<i ; m++)
         {
             prod = prod *(search - x[m]) ;
         }
     
       ans = ans  + (prod * y[0]);
}

printf("ans  = %f" , ans);
return 0;
}