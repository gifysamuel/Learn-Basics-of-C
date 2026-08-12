# include <stdio.h>
# include <math.h>


        // This program gives a basic idea about if else statement.

int main() {

    int age=0;
    int drivingEligibility=18;
    int ageDif=0;


    printf("Enter your Age:");
    scanf("%d",&age);



    if(age >= drivingEligibility){

        printf("Congratz! \n You are eligible to Drive..");
    }

    else if(age < 0)
        {
            printf("INVALID  :< ");
        }

    else{
            ageDif= drivingEligibility-age;
            
        printf("The Eligible Age for Driving is 18!\n You are NOT eligible to Drive..");
        printf("Wait for %d year/s for your Eligibility.",ageDif);
        }

    return 0;
}