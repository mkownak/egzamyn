#include <stdio.h>
#include <stdlib.h>

int roznica(int **tab, int n, int m)
{
    int min=tab[0][0];
    int max=tab[0][0];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(min>tab[i][j])
            {
                min=tab[i][j];
            }
            else if(max<tab[i][j])
            {
                max=tab[i][j];
            }
        }
    }
    return max-min;

}

int main()
{
    int **tab=malloc(2*sizeof(int*));
    * tab=malloc(3*sizeof(int));
    *(tab+1)=malloc(3*sizeof(int));
    tab[0][0]=1;
    tab[0][1]=2;
    tab[0][2]=3;
    tab[1][0]=4;
    tab[1][1]=5;
    tab[1][2]=6;

    printf("%i",roznica(tab,2,3));


    return 0;
}
