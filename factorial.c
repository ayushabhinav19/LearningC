#include <stdio.h>

int factorial(int num,int i){
    int fact;
    printf("factorizing......\n");
    fact=1;
    for (i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int fact,number,j;
    printf("enter the number= ");
    scanf("%d",&number);
    fact=factorial(number,j);
    printf("the factorial of %d is %d",number,fact);
    return 0;
}
