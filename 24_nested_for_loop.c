# include <stdio.h>

/*

        The outer loop controls the rows.

        The inner loop runs completely for every single iteration of the outer loop.

*/

// A nested loop is a loop placed inside another loop. The inner loop executes completely for each iteration of the outer loop.


int main() {

        for (int i=1 ; i<4; i++)
            {
                for (int j = 1; j<10 ; j++){
                    printf(" %d",j);                    
                }
                printf("\n");
            }

return 0;
}