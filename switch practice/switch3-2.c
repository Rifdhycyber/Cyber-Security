#include<stdio.h>

int main() {

    int num1 , num2;

    printf("type two values to compare which is high value : ");
    scanf("%d %d", num1,num2);

    switch (num1 > num2)
    {
    case 0:
        printf("%d id high value number" , num2);
        break;
    case 1:
    printf("%d is high value number", num1);
    break;

    default:
    printf("invalid input");
        break;
    }
    
}