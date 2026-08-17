# include <stdio.h>
# include <string.h>

    void getName(char name[]);

        int main () {
            char name[50]="";

            do {
                
                getName(name);

                if(strlen(name)==0) {
                    printf("Field Empty.\n");
                   
                }

            }
            
            while (strlen(name)==0);

            printf("Hello, %s !",name);

            return 0;
            }



        void getName(char name[]) {

        printf("Enter your NAME: ");
        fgets(name,50,stdin);
        name[strlen(name) - 1] = '\0';

    }