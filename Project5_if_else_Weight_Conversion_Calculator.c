# include <stdio.h>

    // Weight Conversion calculator
    // This program helps us understand about the if - else if - else condition.


int main() {
    int choice = 0;
    float kg=0.0;
    float pounds =0.0;
    printf("Weight Conversion Calculator \n 1. Kilograms to Pounds \n 2. Pounds to Kilograms\n");
    printf("Enter your Choice (1 or 2): ");
    scanf("%d",&choice);


    if ( choice == 1) {

        printf("Enter the Weight is Kilogram/s : ");
        scanf("%f",&kg);
        pounds = kg * 2.20462 ;
        printf("%f kg is %f pounds.",kg,pounds);
    }

    else if(choice == 2){

        printf ("Enter the weight in Pounds: ");
        scanf("%f",&pounds);
        kg = pounds/2.20462 ;
        printf ("%f pounds is %f kgs.",pounds,kg);
        }

    else {

        printf("Choice Invalid !");
    }



    return 0;
}