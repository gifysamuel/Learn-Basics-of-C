# include <stdio.h>
# include <windows.h>


// Nested Loop Example: Generates multiplication tables from 1 to 10.
// The outer loop selects the table, while the inner loop calculates
// and prints the multiples from 1 to 10.



int main () {
int multiplication=0;
for(int i=1; i<=10;i++){

    printf("\nTable of %d \n",i);
    
    printf("----------- \n");

    for (int j=1 ; j<=10;j++){
        Sleep(0232);
        multiplication = i*j;
         printf("%d * %d = %d \n",i,j,multiplication);   
    }
}
return 0;

}