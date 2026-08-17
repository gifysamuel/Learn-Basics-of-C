# include <stdio.h>
# include <string.h>

    void getName(char name[]);

        int main () {
            char name[50]="";

            getName(name);

            while (strlen(name)==0) {
                printf("Field Empty.\n");
                getName(name);

            }

            return 0;
            }



        void getName(char name[]) {

        printf("Enter your NAME: ");
        fgets(name,50,stdin);
        name[strlen(name) - 1] = '\0';

    }