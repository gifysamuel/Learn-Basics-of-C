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
            answer = firstNumber / secondNumber ;
            break ;

        default:
            printf("This is a Basic calculator. Complex Calculations cant be done.");
            break;
}

        printf("The Result for ( %lf %c %lf ) is %lf",firstNumber,operator,secondNumber,answer);
    return 0;
}