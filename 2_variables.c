# include <stdio.h>
# include <stdbool.h>

    
        // variables are used to store data in memory

        // %d is used to print integer values

        //%lf is used to print long floating point values

        // %f is used to print floating point values

        /*
            %.1f is used to print floating point values with one decimal place 
             %.2f is used to print floating point values with two decimal places
              and the others respectively
        */

        // %c is used to print character values

        /* Data Allocation
            int - 4 bytes
            float - 4 bytes 
            double - 8 bytes
            char - 1 byte
            char[] - 1 byte per character
            bool - 1 byte and they require <stdbool.h> header file to be included;
        */



    int main() {



        int x=10;
        printf("The value of x is: %d\n", x);

        int age = 50;
        printf("You are %d years old\n", age);

        
        double pi = 3.14159265358979323846;
        printf("The value of pi is: %.15lf\n",pi);

        float cgpa = 9.5;
        printf ("My CGPA is: %.1f\n",cgpa);

        char grade = 'A';
        printf("My grade is: %c\n", grade);


        //To store a string of characters, we use an array of characters. A string is a sequence of characters terminated by a null character '\0'.
        
        char name[] = "Gify Samuel A";
        printf("My name is: %s\n", name);

        char food[]= "Biriyani";
        printf("My favorite food is %s\n",food);

        //to store boolean values, we use the bool data type. The bool data type can take two values: true or false.

        bool isRaining = true;

        printf("Is it Raining %d\n", isRaining );

        return 0;

    }