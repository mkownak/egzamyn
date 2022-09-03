#include <stdio.h>
#include <stdlib.h>

enum Mebel{krzeslo,stolik,fotel,kanapa,kredens};

int main()
{
    enum Mebel tab[6];
    tab[0]=krzeslo;
    tab[1]=stolik;
    tab[2]=stolik;
    tab[3]=fotel;
    tab[4]=kanapa;
    tab[5]=kredens;

    for(int i=0; i<6; i++)
    {
        if(tab[i]==0)
        {
            printf("krzeslo\n");
        }

        if(tab[i]==1)
        {
            printf("stolik\n");
        }

        if(tab[i]==2)
        {
            printf("fotel\n");
        }

        if(tab[i]==3)
        {
            printf("kanapa\n");
        }

        if(tab[i]==4)
        {
            printf("kredens\n");
        }
    }

    return 0;
}
