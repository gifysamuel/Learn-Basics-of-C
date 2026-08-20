#include <stdio.h>

int main() {

    // An array is a collection of elements of the same data type
    // stored in contiguous memory locations.
    // Array indexing starts from 0.

    // Integer array containing 6 integer values
    int nums[] = {10, 20, 30, 40, 50, 60};

    // Character array storing a string.
    // A string automatically ends with the null character '\0'.
    char name[] = "Gify Samuel A";

    // Character array containing individual characters.
    char grades[] = {'A', 'B', 'C', 'D', 'F'};


    // sizeof(array) gives the total memory occupied by the array.
    // sizeof(array[0]) gives the memory occupied by one element.
    // Dividing them gives the total number of elements in the array.
    int sizeOfnums = sizeof(nums) / sizeof(nums[0]);

    int sizeOfname = sizeof(name) / sizeof(name[0]);

    int sizeOfgrades = sizeof(grades) / sizeof(grades[0]);


    // Accessing and printing each element of the integer array
    // using its index.
    for (int i = 0; i < sizeOfnums; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");


    // Accessing each character of the character array.
    // %c is used to print one character.
    for (int i = 0; i < sizeOfname; i++) {
        printf("%c", name[i]);
    }

    printf("\n");


    // Accessing and printing each element of the grades array.
    for (int i = 0; i < sizeOfgrades; i++) {
        printf("%c ", grades[i]);
    }

}