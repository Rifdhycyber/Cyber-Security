#include <stdio.h>
int main()
// {

//     char name[30];
//     int hour;

//     printf("Enter your name : ");
//     scanf("%s", name);

//     printf("Current time : ");
//     scanf("%d", &hour);

//     if (hour >= 4 && hour < 12)
//     {
//         printf("Good morning %s /n ", name);
//     }
//     else if (hour > 12 && hour < 16)
//     {
//         printf("Good afternoon %s ", name);
//     }
//     else if (hour > 16 && hour < 24)
//     {
//         printf("Good evening %s ", name);
//     }
//     else
//     {
//         printf("now midnight sleep well");
//     }
// }

{

    char name[30];
    int time;

    printf("Enter your name : ");
    scanf("%s", name);

    printf("Current time : ");
    scanf("%d", &time);

    if (time >= 0 && time < 12)
    {
        printf("Good morning %s /n ", name);
    }
    else if (time > 12 && time < 3)
    {
        printf("Good afternoon %s ", name);
    }
    else if (time > 3 && time < 24)
    {
        printf("Good evening %s ", name);
    }
    else
    {
        printf("now midnight sleep well");
    }
}