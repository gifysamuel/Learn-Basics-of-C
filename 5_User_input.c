#include <stdio.h>
#include <string.h>


    /*
        User input is taken by using the scanf() function. 
        The scanf() function reads formatted input from the standard input (stdin) stream, which is usually the keyboard.
        It allows you to specify the format of the input you expect and store the values in variables.
    */


    // This program prompts the user to enter their name, age, height, weight, and gender. It then displays the entered information back to the user.

    /* 
        This helps in understanding how to take user input in C using the scanf() function and
        how to store and display that information.
    */

    // The 0.0f suffix is used to indicate that the number is a float literal. It helps in distinguishing between float and double types in C.


     
    /*
        Using scanf is a bad idea when it comes to reading strings with spaces,
         as it will stop reading at the first whitespace character.
          For example,
             if the user enters "Gify Samuel", only "Gify" will be stored in the name variable.
             To read strings with spaces, we can use fgets() instead of scanf().
    */

    int main()
    {

        char name[30] = "";
        char first_name[15] = "";
        int age = 0;
        float height = 0.0f;
        float weight = 0.0f;
        char gender = '\0';

        printf("Enter your first name: \n");
        scanf("%s", first_name);
        printf("Enter your age: \n");
        scanf("%d", &age);
        printf("Enter your height (in meters): \n");
        scanf("%f", &height);
        printf("Enter your weight (in kilograms): \n");
        scanf("%f", &weight);
        printf("Enter your gender (M/F): \n");
        scanf(" %c", &gender);

        
        
            getchar();                                                           // Consume the newline character left in the input buffer by previous scanf calls
             printf("Enter your full name: \n");
             fgets(name, sizeof(name), stdin);                                               // Use fgets to read the full name with spaces
              name[strlen(name) - 1] = '\0';                                                // Remove the newline character at the end of the string

                 // The Syntax of fgets() is as follows:
                      // fgets(string, size, stream);

                     //stdin is the standard input stream, which is usually the keyboard. It allows us to read input from the user.

            /* 
                The sizeof(name) is used to ensure that we do not read more characters than the size of the name array, preventing buffer overflow.
                It specifies the maximum number of characters to read, including the null terminator.
            */


        printf("First Name: %s\n", first_name);
        printf("Full Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Height: %.3f\n", height);
        printf("Weight: %.3f\n", weight);
        printf("Gender: %c\n", gender);

        return 0;
    }