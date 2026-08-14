# include <stdio.h>


            // We can use logical operators to combine or modify two or more expressions
            // Logical Operators use  && , || anf !


int main () {

    double temperature = 0;
    printf("ENTER THE TEMPERATURE: ");
    scanf("%lf",&temperature);

    if(temperature>=0 && temperature<=30){
        printf("The Temperature is GOOD!");
    }

    else if (temperature <0 && temperature >=-20) {
        printf("The Temperature is COOL !");
    }

    else if (temperature > 30){
        printf("The Temperature is very hot");
    }

    else if(temperature <-20){
        printf("The Temperature is Very Cool!");
    }

    else {
        printf("INVALID");
    }


    return 0;
}