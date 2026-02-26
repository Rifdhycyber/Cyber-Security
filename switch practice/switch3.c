#include <stdio.h>

int main()
{

    int month;

    printf("enter the numbur of the month 1 to 12 : ");
    scanf("%d", & month);

    switch (month)
    {
    case 1:
        printf("january month 31 days");
        break;
    case 2:
        printf("february month 28/29 days");
        break;
    case 3:
        printf("march month 31 days");
        break;
    case 4:
        printf("april month 30 days");
        break;
    case 5:
        printf("may month 31 days");
        break;
    case 6:
        printf("june month 30 days");
        break;
    case 7:
        printf("july month 31 days");
        break;
    case 8:
        printf("august month 31 days");
        break;
    case 9:
        printf("september month 30 days");
        break;
    case 10:
        printf("october month 31 days");
        break;
    case 11:
        printf("november month 30 days");
        break;
    case 12:
        printf("december month 31 days");
        break;

    default:
        ("valid number, please type a number between 1 to 12");
        break;
    }
}