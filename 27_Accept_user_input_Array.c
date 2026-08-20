#include <stdio.h>

int main() {

    // Declare an integer array with 5 elements.
    // Initializing with {0} sets all elements to 0.
    int num[5] = {0};

    // Loop through the array to get input for each element.
    for (int i = 0; i < 5; i++) {

        printf("Enter a Number: ");

        // &num[i] gives the address of the current array element.
        // scanf() stores the user's input at that address.
        scanf("%d", &num[i]);
    }

    // Loop through the array and print each element.
    for (int i = 0; i < 5; i++) {

        // num[i] accesses the value stored at index i.
        printf("%d ", num[i]);
    }

}