/*
    Concepts Covered in this Program:
    
    1. Header Files / Preprocessor Directives
       - stdio.h
       - stdlib.h
       - time.h

    2. Variables and Data Types
       - int
       - Variable declaration and initialization

    3. Formatted Input and Output
       - printf()
       - scanf()
       - %d
       - Address-of operator (&)

    4. Operators
       - Arithmetic operators: +, -, %, =
       - Comparison operators: ==, <, >, !=
       - Increment operator: ++

    5. Conditional Statements
       - if
       - else-if
       - else
       - Nested if

    6. Looping
       - do-while loop

    7. Pseudo-Random Numbers
       - rand()
       - srand()
       - time(NULL)
       - Random number generation within a range

    8. Functions
       - Function prototype
       - Function definition
       - Function parameters
       - Function arguments
       - Return statement
       - Returning a value from a function
       - Call by value

    9. Standard Library Function
       - abs()

    10. Counters
        - Incrementing a variable using i++

    11. Function Return Value
        - Storing the returned value from a function
          using: num = checkGuess(num, randomNumber);
*/


#include <stdio.h>
# include <stdlib.h>
#include <time.h>

int checkGuess(int num,int randomNumber);

int main() {

    srand(time(NULL));
    int min = 1;
    int max = 100;
    int num =0;
    int i =0;
    int randomNumber = (rand() % (max-min +1))+min ;

    do{

      num =  checkGuess(num,randomNumber);

        i++;
    }

    while (num != randomNumber);

    printf("It took you %d tries",i);

    return 0;
}


int checkGuess(int num,int randomNumber){
    
        printf("Enter a number between 1 - 100 : ");
        scanf("%d",&num);

       int diff = abs(num - randomNumber);


        if(num == randomNumber){
            printf("CORRECT \n");
        }


        else if(num<randomNumber)
        {
            if(diff<3){

            printf("Very Close\n");
            printf("TOO LOW\n");
        }

        else{
            printf("TOO LOW\n");

        }
        }

        else if (num > randomNumber){
             if(diff<5){

            printf("Very Close\n");
            printf("TOO HIGH\n");
        }

                else{
            printf("TOO HIGH\n");

        }
            
        }
        return num;
}