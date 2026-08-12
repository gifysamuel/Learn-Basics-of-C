# include <stdio.h>
#include <math.h>


    // in this program we will be doing the math functions.
    
int main() {


    int x=9;
    float y=3.14;
    float z=-3.14;



    double a=sqrt(x);                      //Square Root Function
    double b=pow(x,2);                    // Power Function   -- The Syntax of Power Fn is pow(lower fn,upper fn)
    int c= round(y);                     //  Round off fn
    int d=ceil(y);                      // Ceil Fn --- Rounds of to the highest value
    int e=floor(y);                    // Floor fn --- The Floor fn give the lowest value
    float f=fabs(z);                  // absolute value -- fabs is used for flaoting point values

    float g=sin(3.14/2);            // Trignometric Fn  ----    It must be in radians 



   printf("The Square Root of %d is %f \n",x,a);
   printf("The power of %d raised to 2 is %f\n",x,b);
   printf("The round off of value %f is %d\n",y,c);
   printf("The Ceil value of %f is %d\n",y,d);
   printf("The floor value of %f is %d\n",y,e);
   printf("The Absoluete Value of %f is %f\n",z,f);
   printf ("The sin of 90 is %f \n",g);

    return 0;
}