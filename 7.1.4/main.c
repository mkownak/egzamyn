#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node * next;
};
 
int foo(struct node *lista)
{
    struct node *wsk=lista->next;
    while(wsk!=NULL)
    {
        if(wsk->a%2!=0)
        {
            return &wsk->a;
        }
        wsk=wsk->next;
    }
    return NULL;
}
 
int main()
{
    struct node *lista=malloc(sizeof(struct node));
    lista->next=NULL;
 
    struct node *wsk=malloc(sizeof(struct node));
    wsk->a=4;
    wsk->next=lista->next;
    lista->next=wsk;
 
    struct node *wsk2=malloc(sizeof(struct node));
    wsk2->a=5;
    wsk2->next=lista->next;
    lista->next=wsk2;
 
    struct node *wsk3=malloc(sizeof(struct node));
    wsk3->a=6;
    wsk3->next=lista->next;
    lista->next=wsk3;
 
    printf("%p",foo(lista));
 
    return 0;
}
