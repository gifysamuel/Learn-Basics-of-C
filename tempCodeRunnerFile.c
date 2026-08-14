# include <stdio.h>
# include <string.h>


int main() {

    char choice;
    float celcius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature conversion program \n C. Celsius to Fahrenheit \n F. Fahrenheit to Celsius\n");
    printf("Enter C for Celsius and F for Fahrenheit: ");
    scanf("%c",&choice);

    if (choice == 'c' || choice == 'C')
        {
            printf("Enter the Temperature in Celcius:");
            scanf("%f",&celcius);

            fahrenheit = ( celcius * (9.0/5.0)) + 32  ;

            printf("%f Celcius is equal to % f Fahrenheit,",celcius,fahrenheit);
        }

    else if (choice == 'f' || choice == 'F')
    {
        printf ("Enter the Temperature in Fahrenheit: ");
        scanf("%f",&fahrenheit);

        celcius = (fahrenheit -32)* (5.0/9.0) ;

        printf ("%f Fahrenheit is equal to %f Celcius.",fahrenheit,celcius);
    }

    else {
        printf ("INVALID CHOICE :<");
    }

return 0;
}