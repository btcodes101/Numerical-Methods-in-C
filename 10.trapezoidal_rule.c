//10. Trapezoidal Rule 

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
        float t0 = f(a);
        float t1 = f(b);
        float ans = 0.0;
        ans  = t0 + t1 ;
       for(i = a + h ; i< b ; i = i+h)
        {
            ans  = ans + 2*f(i);
        }
       
        ans  = (ans * h)/2 ;
       
        printf("ans  =  %f",ans);
       
        return 0;
       
        }
