#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;

    printf("Type a number for a A : ");
    scanf("%d", &a);

    printf("Type a number for a B : ");
    scanf("%d", &b);

    printf("Type a number for a C : ");
    scanf("%d", &c);

    if (a > b)
    {
        printf("A is bigger");
    }

    else
        {
            if (c < b)
         {
             printf("B is bigger");
         } else {
            if (a < c)
            {
                {printf("C is bigger");}
            }
            else("A is bigger");
            
         }
         }
    }
