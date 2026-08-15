# include <stdio.h>
# include <stdbool.h>

    /*Write a C program that asks the user to enter a number and uses a function that returns a Boolean value to determine whether the number is even.*/

bool isEven(int number)
{       

        return number % 2 == 0 ;

}


int main() {
    int num =0;

    printf("Enter a NUMBER to check whether its EVEN or ODD: ");
    scanf("%d",&num);

   

    if( isEven(num))
        printf("%d is Even",num);
    else 
        printf("%d is Odd",num);



        return 0;
}