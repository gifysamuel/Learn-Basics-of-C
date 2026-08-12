# include <stdio.h>
# include <math.h>

#define PI 3.14159265358979323846


int main() {
double radius=0.0;
double area=0.0;
double surfaceArea=0.0;
double volume=0.0;

printf("Enter the Radius:");
scanf("%lf",&radius);

    area= PI * pow(radius,2);
    surfaceArea = 4 * PI * pow(radius,2); 
    volume = (4.0/3.0) * PI * pow(radius,3);

    printf("The Area of the Circle is %.4lf \n",area);
    printf("The Surface Area of Sphere is %.4lf \n",surfaceArea);
    printf("The Volume of the Sphere is %.4lf",volume);

return 0;
}
