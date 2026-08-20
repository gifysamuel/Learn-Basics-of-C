# include <stdio.h>
# include <windows.h>



int main() {
    int opn;
    float dep;
    float bal=0;
    float withdraw;
    

    do{
        
    printf("\nEnter an Option \n ---------- \n 1. Check Balance  \n 2. Deposit Money  \n 3. Withdraw Money \n 4. Exit\n Enter your Choice: ");
    scanf("%d",&opn);
     switch(opn)
     {
        case 1:
            // Check Balance
        printf("Your Current Account Balance : %.2f rs.\n",bal);
        Sleep(1000);
            break;

        case 2:
            // Deposit Money
            printf("Enter the Amount to Deposit: ");
            scanf("%f",&dep);
            if(dep>=0) {
            printf("%.2f deposited sucessfully.\n",dep);
            bal +=dep;
            Sleep(1000);
            }
            else {
                printf("-ve Values not accepted.");
            }
            break;

        case 3:
            //Withdraw Money
            printf("Enter the Amount to Withdraw: ");
            scanf("%f",&withdraw);
            if(withdraw>0){
                if(bal>=withdraw){
            printf("%.2f rs. Withdrawn Succesfully.\n",withdraw);
            bal-=withdraw;
            Sleep(1000);
                }
                else{
                    printf("Balance Insufficient.\n");
                    Sleep(1000);                    
                }
            }

             else {
                printf("-ve Values not accepted.");
            }

            break;
            
        case 4:
            return 0;
    }
}
        
        while (opn!=4);
   
return 0;
    }