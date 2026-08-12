# include <stdio.h>


int main() {

    char choice;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature conversion program \n C. Celsius to Fahrenheit \n F. Fahrenheit to Celsius\n");
    printf("Enter C for Celsius and F for Fahrenheit: ");
    scanf("%c",&choice);

    if (choice == 'c' || choice == 'C')
        {
            printf("Enter the Temperature in Celcius:");
            scanf("%f",&celsius);

            fahrenheit = ( celsius * (9.0/5.0)) + 32  ;

            printf("%.1f Celsius is equal to %.1f Fahrenheit,",celsius,fahrenheit);
        }

    else if (choice == 'f' || choice == 'F')
    {
        printf ("Enter the Temperature in Fahrenheit: ");
        scanf("%f",&fahrenheit);

        celsius = (fahrenheit -32)* (5.0/9.0) ;

        printf ("%.1f Fahrenheit is equal to %.1f Celcius.",fahrenheit,celsius);
    }

    else {
        printf ("INVALID CHOICE :<");
    }

return 0;
}