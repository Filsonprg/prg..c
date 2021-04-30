#include <stdio.h>
#include <stdlib.h>
int main()
{
    float castka = 0.01;
    printf("%2i. 4. 2021\t%10.2f CZK\n", 1, castka);
    for (int den = 2; den <= 30; den++)
    {
        castka *= 2;
        printf("%2i. 4. 2021\t%10.2f CZK\n", den, castka);
    }
    return 0;
}