# include <stdio.h>


int square(int number) {
    return number * number ;
}

int cube(int number) {
        int answer = pow(number,3);
        return number * number * number;
}
int main() {

    int n1=0;
    int n2=0;
    int n3 = 0;
    int n4=0;
    int n5=0;
    int n6=0;


    printf("Enter 3 NUMBERS to find its square.\n");

    printf("Enter a Number-1 to Find Its Square: ");
    scanf("%d",&n1);

    printf("Enter a Number-2 to Find Its Square: ");
    scanf("%d",&n2);

    printf("Enter a Number-3 to Find Its Square: ");
    scanf("%d",&n3);



    int x= square(n1);
    int y= square(n2);
    int z= square(n3);



    printf("The Square of %d is %d \n",n1,x);
    printf("The Square of %d is %d \n",n2,y);
    printf("The Square of %d is %d \n",n3,z);


    printf("Enter 3 NUMBERS to find its Cube.\n");

    printf("Enter a Number-1 to Find Its Cube: ");
    scanf("%d",&n4);

    printf("Enter a Number-2 to Find Its Cube: ");
    scanf("%d",&n5);

    printf("Enter a Number-3 to Find Its Cube: ");
    scanf("%d",&n6);

        int a = cube(n4);
    int b= cube(n5);
    int c= cube (n6);

    
    printf("The CUBE of %d is %d \n",n4,a);
    printf("The CUBE of %d is %d \n",n5,b);
    printf("The CUBE of %d is %d \n",n6,c);

}