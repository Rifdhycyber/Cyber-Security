#include <stdio.h>

int main()
{

    int result;

    printf("type ur marks here : ");
    scanf("%d", &result);

    if (result >= 75)
    {
        printf("your results is A pass");
    }
    else if(result >= 60)
    {
        printf("your results is B pass");
    }
    else if(result >= 50)
    {
        printf("your results is C pass");
    }
    else if(result >= 35)
    {
        printf("your results is S pass");
    }
    else
    {
        printf("sorry, your results is W. try again");
    }
}