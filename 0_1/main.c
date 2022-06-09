#include <stdio.h>
#include <stdlib.h>

char *foo(char *napis1, char *napis2)
{
    return "sotom";
}

int main()
{
    char *napis1="sotom";
    char *napis2="motos";
    printf("%s",foo(napis1,napis2));
    return 0;
}
