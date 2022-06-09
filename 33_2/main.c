#include <stdio.h>
#include <stdlib.h>

int suma(int n)
{
    int wynik=0;
    for(int i=0; i<n; i++)
    {
        if(i%5==0 || i%7==0)
        {
            wynik+=i;
        }
    }
    return wynik;
}

int main()
{
    printf("%i\n",suma(9));
    return 0;
}
