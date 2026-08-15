# include <stdio.h>
# include <string.h>

/*


        In C, functions are used to divide a program into smaller, manageable parts. 
        They make programs easier to write, understand, test, and maintain.

        Arguments can be sent to a function so we can use them.

        Uses of Functions in C
        ----------------------
        Code Reusability – Write a function once and call it many times.
        Reduces Code Duplication – Avoids writing the same code repeatedly.
        Improves Readability – Makes the program easier to understand by breaking it into logical parts.
        Simplifies Debugging – Errors can be found and fixed in individual functions.
        Makes Maintenance Easier – Changes made in one function automatically apply wherever it is called.
        Supports Modular Programming – Large programs can be divided into smaller modules.


*/

    void happyBirthday(char name[])
    {
        printf("Happy Birthday to you! \n Happy Birthday to YOU! \n Happy Birthday Dear %s Happy Birthday to you.\n",name);

    }

    int main () {

       char name[50];
        printf("Enter your NAME for your Happy Brithday Song: ");
        fgets(name,sizeof(name),stdin);
       
        happyBirthday(name);


        return 0;
    }