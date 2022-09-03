#include <stdio.h>
#include <stdlib.h>

enum Pies{buldog, labrador, pudel, bokser, burek, mops};

int main()
{
    enum Pies tab[6];
    tab[0]=buldog;
    tab[1]=labrador;
    tab[2]=pudel;
    tab[3]=bokser;
    tab[4]=burek;
    tab[5]=mops;

    for(int i=0; i<6; i++)
    {
        printf("%i",tab[i]);
    }
    return 0;
}
