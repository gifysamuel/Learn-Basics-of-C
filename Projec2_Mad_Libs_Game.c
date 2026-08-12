#include <stdio.h>
#include <string.h>

    // This Program helps us understand about fgets() and the srtlen();
int main() {

    char adjective1[20];
    char noun[20];
    char adjective2[20];
    char verb[20];
    char adjective3[20];


    printf("Enter and Adjective (description):");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1] = '\0';

    printf("Enter a noun (animal or Person):");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an Adjective (desription):");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2) - 1] = '\0' ;

    printf("Enter a verb (Endding with -  ing):");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an Adjective(Description): ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3) -1] = '\0' ;


    printf("Today I went to a %s zoo. \n In an exhibit I saw %s. \n %s was %s and %s! \n I was %s.",adjective1,noun,noun,adjective2,verb,adjective3);





    return 0;
}