#include <stdio.h>

int main(){
    int number,i,j,k;
    printf("enter the number of rows= ");
    scanf("%d",&number);

    for (i = 0; i <= number; i++)
    {
        for (j=0;j<= number-i-1;j++){
            printf(" ");
        }
        for (k=0;k<=2*i;k++){
            printf("*");
        }
        printf("\n");
    }   
    return 0;
}
