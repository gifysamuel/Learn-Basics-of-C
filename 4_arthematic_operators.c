# include <stdio.h>
#include <math.h>

    // arithmetic operators, we can use the +, -, *, /, and % operators to perform arithmetic operations on variables.

    // ++ and -- are unary operators that can be used to increment or decrement a variable by 1.
    
    // we can also use the +=, -=, *=, /=, and %= operators to perform arithmetic operations on variables and assign the result to the variable.
    

int main() {
    float x=20;
    float y=30;
    float z=0;

    z=x+y;
    float a= x-y;
    float b= x*y;
    float c= x/y;
    float d=fmod(x,y);

    printf(" The sum of x (%f) and y (%f) is %f \n",x,y,z);
    printf(" The difference of x (%f) and y (%f) is %+.2f \n",x,y,a);
    printf(" The product of x (%f) and y (%f) is %.2f \n",x,y,b);
    printf(" The quotient of x (%f) and y (%f) is %.2f \n",x,y,c);
    printf(" The remainder of x (%f) and y (%f) is %.2f \n",x,y,d);





    return 0;
}