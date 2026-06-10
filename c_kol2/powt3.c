#include <stdio.h>
#include <stdlib.h>

struct trojkat {
    int a, b, c;
};

struct element {
    int i;
    struct element* next;
};

struct element* utworz() {
    return NULL;
}

struct element* dodaj(struct element* lista, int a) {
    struct element* e = (struct element*)malloc(sizeof(struct element));
    e->i = a;
    e->next = lista;
    return e;
}

int main() {
    struct element* tab = utworz();

    tab = dodaj(tab, 1);



    return 0;
}
