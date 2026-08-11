#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char product[25];
    float price=0.0f;
    int item=0;


    
    printf("Enter Your NAME:\n");

    fgets(name,sizeof(name),stdin);

    
    printf("Enter the Product you want to Purchase:\n");

    fgets(product,sizeof(product),stdin);
    product[strlen(product) - 1] = '\0';

    printf("Enter the Prize of the Product: \n");
    scanf("%f", &price);

    printf(" How many would you like? : \n");
    scanf("%d", &item);

    float total_price= price*item;



    printf("Name:%s",name);
    printf("Your Product is %s and its total price is %.2f ",product,total_price);
    


    return 0;
}