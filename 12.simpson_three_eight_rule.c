//12. Simpson's three eighth rule

#include<stdio.h>
#include<math.h>

    float f (float x)
    {
    return (1/(1+x));
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
        float ans = f(a)+f(b);
        float s1=0,s2 = 0,s3=0;
        int k=1;
        
        for(i = a+h; i<b;i = i+h)
            {
            if(k%3==0)
            s1 = s1+f(i);
            else
            s2 = s2 + f(i);
           
            k++;
            }
       
        ans  = ((ans + 2*s1 + 3*s2)*3*h)/8 ;  
       
        printf("ans  =  %f",ans);
       
        return 0;
}
 