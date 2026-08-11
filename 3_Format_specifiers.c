#include <stdio.h>

//format specifiers, we use the % symbol followed by a character that indicates the type of data we want to print.


int main() {

    int age = 18;
    float cgpa = 9.5;
    double pi = 3.14159265358979323846;
    char grade = 'A';
    char name[] = "Gify Samuel A";

    printf("%d \n", age);

    printf("%d \n", age);
    printf("%.1f \n", cgpa);
    printf("%.15lf \n", pi);
    printf("%c \n", grade);
    printf("%s \n", name);



    /*
        width specifiers, we can specify the minimum number of characters to be printed for a value.
         If the value has fewer characters than the specified width, it will be padded with spaces on the left.
          If the value has more characters than the specified width, it will be printed as is.
    */


    int num1=10;
    int num2=20;
    int num3=30;


    printf("%2d \n", num1);   // %2d means that the integer will be printed with a minimum width of 2 characters. If the integer has fewer than 2 digits, it will be padded with spaces on the left. If it has more than 2 digits, it will be printed as is.
    printf("%03d \n", num2); // %03d means that the integer will be printed with a minimum width of 3 characters. If the integer has fewer than 3 digits, it will be padded with zeros on the left. If it has more than 3 digits, it will be printed as is.
    printf("%4d \n", num3);

    return 0;
}