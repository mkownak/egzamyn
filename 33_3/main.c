#include <stdio.h>
#include <stdlib.h>

struct Osoba
{
    char imie[20];
    int wiek;
    float wzrost;
};

char *naj(struct Osoba tab[], int n)
{
    int max=tab[0].wiek;
    for(int i=0; i<n; i++)
    {
        if(max<tab[i].wiek)
        {
            max=tab[i].wiek;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(max==tab[i].wiek)
        {
            return tab[i].imie;
        }
    }
}

int main()
{
    struct Osoba o1={"Sotom",20,105.79}; /* incjuj w taki sposob jak okreslony char */
    struct Osoba o2={"Pawel",25,110.89};
    struct Osoba o3={"Adam",45,167.5};

    struct Osoba tab[3]={o1,o2,o3};

    printf("%s\n",naj(tab,3));




    return 0;
}
