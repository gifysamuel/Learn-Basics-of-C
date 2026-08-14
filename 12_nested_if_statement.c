# include <stdio.h>
# include <stdbool.h>

int main (){

    float price = 10.0f;
        // This program helps us understand the logic of nested if and the discount problem..
        
    bool isStudent=true;
    bool isSenior = true;
    
    
    if(isStudent == true)
    {
            if(isSenior==true){
                // Student + Senior = 30% discount
                price*=0.7;
            }
            else
            price*=0.9; // Student discount 10%
    }
    
    
    else if (isSenior == true ){

        price=price*0.80;   // Senior discount 20 %
        }


printf("The Price is %f", price);


    return 0;
}