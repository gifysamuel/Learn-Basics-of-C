# include <stdio.h>

        //switch case
int main () {

    int dayOfWeek =0 ;

        printf("Enter a num from 1-7 :");
        scanf("%d",&dayOfWeek);


    switch(dayOfWeek) {

        case 1:
        
            printf("It's Monday");
            break;
        

        case 2:

            printf("It's Tuesday");
            break;

        case 3:

            printf("It's Wednesday");
            break;

        case 4:

            printf("It's Thursday");
            break;

        case 5:
            printf("Its Friday");
            break;

        case 6:
            printf("It's Saturday");
            break;
        
        case 7:
            printf("It's Sunday");
            break;
    
        default:
            printf("Please Enter the Number 1-7");
            break;
    }

    return 0;
}