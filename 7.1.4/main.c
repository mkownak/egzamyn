#include <stdio.h>
#include <stdlib.h>

struct Pracownik
{
    char *imie;
    int nr;
    float wynagrodzenie;
};

int max(struct Pracownik tab[], int n)
{
    int max=tab[0].nr;
    for(int i=0; i<n; i++)
    {
        if(tab[i].nr>max)
        {
            max=tab[i].nr;
        }
    }
    return max;
}

int main()
{
    struct Pracownik P1;
    P1.imie="Adam";
    P1.nr=6;
    P1.wynagrodzenie=100.01;

    struct Pracownik P2;
    P2.imie="Andrzej";
    P2.nr=10;
    P2.wynagrodzenie=105.02;

    struct Pracownik P3;
    P3.imie="Adam";
    P3.nr=21;
    P3.wynagrodzenie=110.03;

    struct Pracownik tab[3]={P1,P2,P3};

    printf("%i",max(tab,3));

    return 0;
}
