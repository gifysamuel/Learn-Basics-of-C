# include <stdio.h>
# include <math.h>

//COMPOUND INTEREST CALCULATOR


/*
        C concepts:

            double
            scanf() with %lf
            addresses with &
            pow()
            arithmetic operators
            floating-point division
            variables and formulas
            formatted printf()
*/

int main() {
    double P=0.0;
    double R=0.0;
    double T=0.0;
    double n=0.0;
    double A=0.0;
    double CI=0.0;



    printf("Enter the principal(P):");
    scanf("%lf",&P);
    printf("Enter the interest Rate (R):");
    scanf("%lf",&R);
    printf("Enter the No. of Years (t):");
    scanf("%lf",&T);
    printf("Enter the no of times compounded per year:");
    scanf("%lf",&n);

    R=R/100;
    A = P*pow((1+(R/n)),(n*T));
    CI= A-P;



    printf("After %.1lf years,The CI will be %.2lf and the Total Amount is %.2lf",T,CI,A);


    return 0;
}