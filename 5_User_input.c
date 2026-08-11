#include <stdio.h>

int main() {

    char name[30]="";
    int age=0;
    float height=0.0f;
    float weight=0.0f;
    char gender='\0';

    printf("Enter your name: \n");
    scanf("%s",name);
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Enter your height (in meters): \n");  
    scanf("%f",&height);
    printf("Enter your weight (in kilograms): \n");
    scanf("%f",&weight);
    printf("Enter your gender (M/F): ");
    scanf(" %c",&gender);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Weight: %f\n", weight);
    printf("Gender: %c\n", gender);
return 0;
}