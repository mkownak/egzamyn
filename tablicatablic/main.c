#include <stdio.h>
#include <stdlib.h>

void show(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%i ",tab[i][j]);
        }
        printf("\n");
    }
    printf("-------\n");
}

void foo(int **tab,int n, int m)
{
    for(int i=0;i<n;i++)
    {
        tab[i][0]=tab[i][0]*tab[i][0];
        tab[i][m-1]=tab[i][m-1]*tab[i][m-1];
    }
}


int main()
{
    int **tab=malloc(3*sizeof(int*));
    * tab=malloc(4*sizeof(int));
    *(tab+1)=malloc(4*sizeof(int));
    *(tab+2)=malloc(4*sizeof(int));
    tab[0][0]=1;
    tab[0][1]=2;
    tab[0][2]=3;
    tab[0][3]=4;
    tab[1][0]=4;
    tab[1][1]=5;
    tab[1][2]=6;
    tab[1][3]=7;
    tab[2][0]=8;
    tab[2][1]=9;
    tab[2][2]=10;
    tab[2][3]=11;


   show(tab,3,4);

    return 0;
}
