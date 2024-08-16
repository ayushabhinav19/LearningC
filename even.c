#include <stdio.h>

int check(int number){
    printf("checking....\n");
    if(number%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(){
    int number,even;
    printf("enter the number= ");
    scanf("%d",&number);
    even=check(number);
    if(even==0)
    {
        printf("%d is even number",number);
    }
    else
    {
        printf("%d is odd number",number);
    }
   return 0;
}