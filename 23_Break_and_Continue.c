# include <stdio.h>


int main() {
    // Break : Break out of a LOOP. (STOP)
    // Continue :skip current cycle of loop (SKIP)


    for (int i=1; i<=10 ; i++) {


            if (i==9){
                break;
            }

        if(i==3){
            continue;
        }



        printf("%d \n",i);

        }

    return 0;
        
}