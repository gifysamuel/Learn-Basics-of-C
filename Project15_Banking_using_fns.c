# include <stdio.h>
#include <windows.h>

void checkBal(float bal);
float depositMoney(float dep);
float withdrawMoney(float bal) ;

int main() {
    int opn;
    float dep;
    float bal=0.0;


    
    do{
        
    printf("\nEnter an Option \n ---------- \n 1. Check Balance  \n 2. Deposit Money  \n 3. Withdraw Money \n 4. Exit\n Enter your Choice: ");
    scanf("%d",&opn);
     switch(opn)
     {
        case 1:
            checkBal(bal);
            break;

        case 2:
            // Deposit Money
            
            bal+=depositMoney(dep);
            break;


        case 3:
            //Withdraw Money
           
        bal-=withdrawMoney(bal);
            break;
            
        case 4:
            return 0;
    }
}
        
        while (opn!=4);
}


void checkBal(float bal){
                // Check Balance
        printf("Your Current Account Balance : %.2f rs.\n",bal);
        Sleep(1000);
}

float depositMoney(float dep) {
            
            printf("Enter the Amount to Deposit: ");
            scanf("%f",&dep);
            if(dep>=0) {
            printf("%.2f deposited sucessfully.\n",dep);
            
            Sleep(1000);
             return dep;
            }
            else {
                printf("-ve Values not accepted.");
            }
           
          
}


float withdrawMoney(float bal) {
    float withdraw;
                printf("Enter the Amount to Withdraw: ");
            scanf("%f",&withdraw);

            if(withdraw>0){
                if(bal>=withdraw){
            printf("%.2f rs. Withdrawn Succesfully.\n",withdraw);
            
            Sleep(1000);
            return withdraw;
                }
                else{
                    printf("Balance Insufficient.\n");
                    Sleep(1000);                    
                }
            }

             else {
                printf("-ve Values not accepted.");
            }

}