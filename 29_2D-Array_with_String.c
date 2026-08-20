# include <stdio.h>


int main() {
    char fruits[][20]={  "Apple",
                         "Orange",
                         "Bannana",
                         "Mango",
                         "Jackfruit"};

    int size = sizeof(fruits) / sizeof(fruits[0]);

    for (int i=0;i<size;i++) {
        printf("%s \n",fruits[i]);
    }


    }