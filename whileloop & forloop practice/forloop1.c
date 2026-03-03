#include<stdio.h>

int main() {
    int num;

    printf("input a positice number : ");
    scanf("%d", &num);

    while (num <= 0)
    {
        printf("wrong!!!, input a positive number : ");
        scanf("%d", &num);
    }
     
    printf("thank you, you are fiving number is : %d", num);
}