# include <stdio.h>
# include <stdbool.h>



// Function prototype: tells the compiler the function's name,
// return type, and parameters before the function is defined.
// It helps the code to look organised and hepls in easy readability and asccebility.


void hello(char name[],int age);
bool ageCheck(int age);

int main () {


    char NAME[50]="";
    int age = 0;
    
    
    printf("Enter your NAME: \n");
    fgets(NAME, sizeof(NAME),stdin);
    
    printf("Enter your Age:");
    scanf("%d",&age);

    hello(NAME,age);




    if (ageCheck(age))
        printf("\n You are an Adult.");
    
    else
        printf("\n You are a Child.");

        return 0;
}

void hello (char name[],int age) {

    printf("Hello %s",name);
    printf("You are %d years old.",age);

}


bool ageCheck(int age) {

    return age>=18;
}