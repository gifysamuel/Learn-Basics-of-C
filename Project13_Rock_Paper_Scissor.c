/*
    ROCK PAPER SCISSORS GAME

    Concepts covered:
    - Header files
    - Function prototypes
    - Functions and return values
    - Function parameters
    - Random number generation using rand() and srand()
    - do-while loop
    - Input validation
    - switch statement
    - if, else if, and else
    - Logical operators (&& and ||)
    - Sleep() function
*/



# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <windows.h>


int getComputerChoice();
int getUserChoice();
void checkResult(int Comp,int user);

int main(){
    srand(time(NULL));

    int Comp= getComputerChoice();
    int User = getUserChoice();
    


switch(Comp){
    case 1:
        printf("Computer's Choice: Rock\n");
        break;


    case 2 :
        printf("Computer's Choice: Paper\n");
        break;

    case 3:
        printf("Computer's Choice: Scissors\n");
        break;   

}

switch(User){
    case 1:
        printf("Your Choice: Rock\n");
        break;


    case 2 :
        printf("Your Choice: Paper\n");
        break;

    case 3:
        printf("Your Choice: Scissors\n");
        break;   

}
Sleep(800);
checkResult(Comp,User);
return 0;

}


int getComputerChoice(){

        
        int randNum= (rand() % 3) + 1 ;

        return randNum;


}

int getUserChoice() {
    int inp=0;


    do {

    printf("Choose an Option: \n ----------- \n 1. ROCK \n 2. PAPER \n 3. SCISSORS\n Enter Your Choice:");
    scanf("%d",&inp);
    }

    while (inp<1 || inp>3);
    return inp;
}

void checkResult(int Comp,int user) {

    if (Comp == user){
        printf("Draw.");
    }
    else if (Comp == 1 && user == 2 || Comp == 2 && user == 3 || Comp == 3 && user == 1 ){
        printf("You Win.");
    }
    else{
        printf("You Lose");
    }
    
}