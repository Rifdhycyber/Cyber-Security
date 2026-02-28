#include<stdio.h>
int main(){

    int number;
    
    do
    {
        printf("enter a positive number : ");
        scanf("%d", &number);
    } while ( number > 0);


    return 0;
    
}