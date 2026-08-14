# include <stdio.h>

        //switch case
int main () {

    char dayOfWeek ='\0'  ;

        printf("Enter a day or week (M,T,W,R,F,S,U) :");
        scanf("%c",&dayOfWeek);


    switch(dayOfWeek) {

        case 'M':
        
            printf("It's Monday");
            break;
        

        case 'T':

            printf("It's Tuesday");
            break;

        case 'W':

            printf("It's Wednesday");
            break;

        case 'R':

            printf("It's Thursday");
            break;

        case 'F':
            printf("Its Friday");
            break;

        case 'S':
            printf("It's Saturday");
            break;
        
        case 'U':
            printf("It's Sunday");
            break;
    
        default:
            printf("Please Enter CHARACTER (M,T,W,R,F,S,U)");
            break;
    }

    return 0;
}