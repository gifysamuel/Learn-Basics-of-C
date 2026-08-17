# include <stdio.h>
# include <windows.h>

        // Sleep(1000) is from the Windows API and takes milliseconds, so 1000 = 1 second.
        
int main () {

    for (int i = 10; i>=1 ; i--){
        Sleep(1000);
        printf("%d \n",i);
    }

    printf("HAPPY NEW YEAR!");
    return 0;
}