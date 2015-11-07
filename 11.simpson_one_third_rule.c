//11.  Simpson's one third

#include<stdio.h>
#include<math.h>

    float f (float x)
    {
    return (1/(1+(x)));
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
        float ans = 0.0,s1=0,s2 = 0;
        ans  = t0 + t1 ;
       
       
        for(i = a + h ; i<= b-h ; i = i+h+h)
            {
                s1  = s1 + f(i);
            }
        for(i = a + h+h ; i<= b-h-h ; i = i+h+h)
        {
            s2 = s2 + f(i);
        }
       
        ans  = ((ans + 4*s1 + 2*s2) * h)/3 ;  
       
        printf("ans  =  %f",ans);
       
        return 0;
       
        }
