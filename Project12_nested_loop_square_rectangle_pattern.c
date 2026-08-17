# include <stdio.h>

int main() {

    int m,n =0 ;
    char s='\0';

    
    printf("Enter the no of Rows: ");
    scanf("%d",&m);

    printf("Enter the no of Column: ");
    scanf("%d",&n);

    printf("Enter the Symbol to use: ");
    scanf(" %c",&s);

    for(int i=1; i<=m;i++) {
        for(int j=1; j<=n;j++){
            printf("%3c",s);

        }
        printf("\n");
    }
    return 0;
}