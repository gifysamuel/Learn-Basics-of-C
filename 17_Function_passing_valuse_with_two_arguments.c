# include <stdio.h>


int getMax(int num1,int num2) {

    if(num1<num2) 
        return num2;
    
    else 
        return num1;
}


int main () {


    int number1 = 0 ;
    int number2 = 0 ;

    printf("Enter number 1 : ");
    scanf("%d",&number1);

    printf("Enter number 2: ");
    scanf("%d",&number2);

    if (number1 == number2)
    {
        printf("They are Eqaual.");
    }
else
    printf("The Maximum NUMBER is %d",getMax(number1,number2));

    return 0;

}