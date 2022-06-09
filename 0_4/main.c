#include <stdio.h>
#include <stdlib.h>

struct element {
float x;
struct element * next;
};

int dlugosc(struct element *lista)
{
    int wynik=0;
    struct element *wsk=lista;
    while(wsk!=NULL)
    {
        wynik++;
        wsk=wsk->next;
    }
    return wynik;
}

void wyswietl(struct element *lista)
{
    if(lista==NULL)
    {
        printf("%p\n",NULL);
        return;
    }

    struct element *wsk=lista;
    printf("%p\n",&wsk->x);

    int d=dlugosc(lista);
    for(int i=0; i<d-1; i++)
    {
        wsk=wsk->next;
    }
    printf("%p\n",&wsk->x);


}

int main()
{
    struct element *lista=NULL;
    struct element *lista2=NULL;

    struct element *wsk=malloc(sizeof(struct element));
    wsk->x=5.5;
    wsk->next=NULL;
    lista=wsk;

    struct element *wsk2=malloc(sizeof(struct element));
    wsk2->x=1.3;
    wsk2->next=lista;
    lista=wsk2;

    struct element *wsk3=malloc(sizeof(struct element));
    wsk3->x=8.1;
    wsk3->next=lista;
    lista=wsk3;

    wyswietl(lista2);


    return 0;
}
