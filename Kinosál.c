#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

/* Program znázorňuje malý kinosál který je vyplnění 1 a 0 1- znázorňují obsazená místa 0- volná místa  je to čtverec 5x5 a jedničky nám tvoří takový trojúhelník. */ 

int kinosal[5][5];
int i, j;
// Naplnění nulami
for (j = 0; j < 5; j++)
    for (i = 0; i < 5; i++)
        kinosal[j][i] = 0;
kinosal[2][2] = 1; // Prostredek
for (i = 1; i < 4; i++) // 4. radek
{
        kinosal[i][3] = 1;
}
for (i = 0; i < 5; i++) // Posledni radek
{
    kinosal[i][4] = 1;
}

for (j = 0; j < 5; j++)
{
        for (i = 0; i < 5; i++)
                printf("%d", kinosal[i][j]);
        printf("\n");
}
	return 0;
}
