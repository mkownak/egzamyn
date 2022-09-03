#include <stdio.h>
#include <stdlib.h>

void wyswietl(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("%i\n",tab[i]);
    }
    printf("--------\n");
}

void zeruj(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]<0)
        {
            tab[i]=0;
        }
    }
}

int main()
{
    int tab[7]={-3,-4,-5,1,2,3,4};
    wyswietl(7, tab);
    zeruj(7,tab);
    wyswietl(7,tab);
    return 0;
}
