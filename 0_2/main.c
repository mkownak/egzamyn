#include <stdio.h>
#include <stdlib.h>

int szescian(int n)
{
    int wynik=1;
    for(int i=0; i<3; i++)
    {
        wynik*=n;
    }
    return wynik;
}

int suma6(int n)
{
    int wynik=0;
    for(int i=1; i<=n; i++)
    {
        wynik+=szescian(i);
    }
    return wynik;
}

int main()
{
    printf("%i",suma6(3));
    return 0;
}
