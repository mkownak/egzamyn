#include <stdio.h>
#include <stdlib.h>

struct element
{
    int a;
    struct element * next;
};

int ile(struct element *lista, int x)
{
    struct element *wsk=lista->next;
    int wynik=0;

    while(wsk!=NULL)
    {
        if(wsk->a==x)
        {
            wynik++;
        }
        wsk=wsk->next;
    }
    return wynik;
}

int main()
{
    struct element *lista=malloc(sizeof(struct element));
    lista->next=NULL;

    struct element *wsk=malloc(sizeof(struct element));
    wsk->a=4;
    wsk->next=lista->next;
    lista->next=wsk;

    struct element *wsk2=malloc(sizeof(struct element));
    wsk2->a=5;
    wsk2->next=lista->next;
    lista->next=wsk2;

    struct element *wsk3=malloc(sizeof(struct element));
    wsk3->a=4;
    wsk3->next=lista->next;
    lista->next=wsk3;

    printf("%i",ile(lista,4));

    return 0;
}
