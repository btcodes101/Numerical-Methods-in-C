//13. Weddle Rule 

#include<stdio.h>
#include<math.h>

    float f (float x)
    {
    return (1/(1+(x*x)));
    }

    int main()
      {
        float n,a,b;
        printf("enter value of n:\n");
       
        scanf("%f",&n);
       
        printf("enter value of a:\n");
       
        scanf("%f",&a);
        printf("enter value of b:\n");
       
        scanf("%f",&b);
     
        float h = (b-a)/n ;
       
        float i = 0;
        float ans = 0;
        float s1=0,s2 = 0,s3=0;
        int k=1;
        
        for(i = 0; i<=(n-6);i = i++)
            {
           
 ans = ans + f(a+h*i)+5 * f(a+h*(i+1))+ f(a+h*(i+2))+ 6 * f(a+h*(i+3)) + f(a+h*(i+4))+5* f(a+h*(i+5)) +  f(a+h*(i+6)) ;
                   
            }
       
        ans  = (ans * 3*h) / 10 ;  
       
        printf("ans  =  %f",ans);
       
        return 0;
}
