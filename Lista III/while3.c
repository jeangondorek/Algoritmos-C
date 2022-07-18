#include <stdio.h>

int main()
{
        int a,
           b=1;

        printf("Lado do quadrado: ");
        scanf("%d", &a);

        while( b <= a*a)
        {
            if(b % a == 0)
                printf("*\n");
            else
                printf("*");

            b++;
        }


}

