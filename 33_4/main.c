#include <stdio.h>
#include <stdlib.h>

struct node
{
    float x;
    struct node *next;
};

int check(struct node *lista)
{

    if(lista==NULL)
    {
        return 0;
    }

    struct node *wsk=lista;

    while(wsk!=0)
    {
        if(wsk->x<0)
        {
            return 0;
        }
        wsk=wsk->next;
    }
    return 1;
}

int main()
{
    struct node *lista=NULL;
    struct node *wsk=malloc(sizeof(struct node));
    wsk->x=5.1;
    wsk->next=NULL;
    lista=wsk;

    struct node *wsk2=malloc(sizeof(struct node));
    wsk2->x=1.3;
    wsk2->next=lista;
    lista=wsk2;

    struct node *wsk3=malloc(sizeof(struct node));
    wsk3->x=8.4;
    wsk3->next=lista;
    lista=wsk3;

    printf("%i\n",check(lista));

    struct node *lista2=NULL;
    printf("%i\n",check(lista2));

    return 0;
}
