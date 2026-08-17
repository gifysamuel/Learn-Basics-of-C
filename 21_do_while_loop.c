# include <stdio.h>


    // do While Loop = A do-while loop is a loop that executes its block of code at least once, and then continues repeating while the condition is true.


    /*
            while loop:

            Checks the condition before executing the code.

            do-while loop:

            Executes the code first, then checks the condition.
    */
int main () {

    int num = 1;


    
    do {
        printf("Enter a number wich is greater than 0 : ");
        scanf("%d",&num);
    }
    while (num <= 0);
    
return 0;
}


    /*
    
        Even though num is initially 1, and:

1 <= 0 → FALSE

the printf() and scanf() still execute once.

Why?

Because a do-while loop executes the code first and checks the condition afterward.

The flow is:

num = 1
   ↓
Execute do block
   ↓
Ask the user for a number
   ↓
Check: num <= 0?
   ↓
FALSE → Stop

So, unlike a while loop, the do-while loop always executes its body at least once, even if the condition is false from the beginning.
    */