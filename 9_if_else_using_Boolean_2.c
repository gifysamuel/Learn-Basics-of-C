#include <stdio.h>
#include <string.h>

        // This program checks whether you entered your name or not using if else included with boolean.

int main()  {

    char name[50]="";

    printf("Enter your NAME:");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    if (strlen(name) == 0){
        printf("You did not Enter your Name");
    }
    else{
        printf("Name Entered Sucessfully!");
    }

        return 0;
}