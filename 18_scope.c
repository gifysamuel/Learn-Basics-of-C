# include <stdio.h>

// Scope means where a variable can be accessed or used in your program.

// Variables can have same name if they are in different scopes {}.

// Here the variable result is used twice but in different scope so they are local variables and can be accesed only in their scope.

//int result = 0; // This is Global Scope (Not Recomended as it is hard to Debug)

int add(int n1, int n2) {

        int result = n1 + n2;           // Local Variable
        return result;
}

int main () {

        int result = add(3,4);          // Local Variable
        printf("%d", result);

    return 0;
}