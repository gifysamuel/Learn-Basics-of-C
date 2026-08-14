# include <stdio.h>

        // Basic Calculator That does + - * / of 2 numbers
int main() {

        double firstNumber=0.0;
        double secondNumber=0.0;
        char operator='\0';

        double answer=0.0;

        printf("Enter the First Number: ");
        scanf("%lf",&firstNumber);
        
        getchar();
        printf("Enter the Operator(+ , - , * , /)");
        scanf("%c",&operator);


        printf("Enter the second number: ");
        scanf("%lf",&secondNumber);

        switch(operator) {

        case '+' :
            answer = firstNumber + secondNumber ;
            break;

        case '-':
            answer = firstNumber - secondNumber ;
            break;
        
        case '*' :
            answer = firstNumber * secondNumber ;
            break;

        case '/' :

            if(secondNumber == 0){
                printf("You cant divide a number by 0");
                return 0;
            }
            else
                 answer = firstNumber / secondNumber ;
            break ;

        default:
            printf("Invalid operator. Please use +, -, *, or /.");
            return 1;
}

        printf("The Result for ( %lf %c %lf ) is %lf",firstNumber,operator,secondNumber,answer);
        
    return 0;
}