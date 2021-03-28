#include <stdio.h>
#include <stdlib.h>
#define POCET 10

/* Program dělá to že vždy se dá kolik chceme čísel za sebou např dáme do POČTU ČÍSLO 20 a program nám vypíše 20 čísel po sobě jdoucí je to jednoduchý prográmek. */


int main(int argc, char** argv) {
    // Vytvoření pole
    int pole[POCET];

    // Naplnění pole
    int i;
    for (i = 0; i < POCET; i++)
    {
        pole[i] = i + 1;
    }

    // Výpis pole
    for (i = 0; i < POCET; i++)
    {
        printf("%d ", pole[i]);
    }
    return 0;
}
