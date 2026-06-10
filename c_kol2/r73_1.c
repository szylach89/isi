#include <stdio.h>
#include <stdlib.h>

// 20.05.2026, 21.05.2026, 27.05.2026

struct element {
    int i;
    struct element* next;
};

struct element* utworz() {
    return NULL;
}

// 7.3.2
void wyczysc(struct element* lista) {
    struct element* wsk = lista;
    while(lista != NULL) {
        lista = lista->next;
        free(wsk);
        wsk = lista;
    }
}

// 7.3.3
struct element* dodaj(struct element* lista, int a) {
    struct element* e = (struct element*)malloc(sizeof(struct element));
    e->i = a;
    e->next = lista;
    return e;
}

// 7.3.4
struct element* dodajk(struct element* lista, int a) {
    struct element* wsk;
    if (lista == NULL) {
        wsk = (struct element*)malloc(sizeof(struct element));
    }
    else {
        while (wsk->next != NULL) {
            wsk = wsk->next;
        }
        wsk->next = (struct element*)malloc(sizeof(struct element));
    }
    wsk->next->i = a;
    return lista;
}

void wypisz(struct element* lista) {
    struct element* wsk = lista;
    while(wsk->next != NULL) {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("%d\n", wsk->i);
}

// 7.3.5
struct element* dodajw(struct element* lista, struct element* elem, int a) {
    struct element* wsk = lista;
    struct element* nowy = (struct element*)malloc(sizeof(struct element));
    nowy->i = a;
    while (wsk != elem || wsk == NULL) {
        wsk = wsk->next;
    }
    struct element* nast = wsk->next;;
    wsk->next = nowy;
    nowy->next = nast;

    return lista;
}

// 7.3.6
struct element* znajdz(struct element* lista, int a) {
    struct element* wsk = lista;
    while(wsk->i != a) {
        if (wsk->next == NULL) {
            return NULL;
        }
        wsk = wsk->next;
    }
    return wsk;
}

// 7.3.10
struct element* utworz_h() {
    struct element* tab = (struct element*)malloc(sizeof(struct element));
    tab->next = NULL;
    return tab;
}

// 7.3.12
struct element* dodajp_h(struct element* arr, int a) {
    struct element* nowy = malloc(sizeof(struct element));
    nowy->i = a;
    if (arr->next != NULL) {
        nowy->next = arr->next;
    }
    else {
        nowy->next = NULL;
    }
    arr->next = nowy;
    return arr;
}

struct element* dodajk_h(struct element* arr, int a) {
    struct element* wsk = arr->next;
    while(wsk->next != NULL) {
        wsk = wsk->next;
    }
    struct element* nowy = malloc(sizeof(struct element));
    nowy->i = a;
    nowy->next = NULL;
    wsk->next = nowy;
    return arr;
}

// 3.7.20
struct element* zeruj(struct element* arr) {
    if (arr->next != NULL) {
        struct element* wsk = arr->next;
        while (wsk->next != NULL) {
            wsk->i = 0;
            wsk = wsk->next;
        }
        wsk->i = 0;
    }
    return arr;
}

// 03.06.26 <- Powtórzenie przed kolokwium
// zad 1
int suma_kwad(struct element* arr) {
    int suma = 0;
    struct element* wsk = arr;
    while(wsk->next != NULL) {
        suma += wsk->i * wsk->i;
        wsk = wsk->next;
    }
    suma += wsk->i * wsk->i;
    return suma;
}

// zad 2 <- zdobyte +1 pkt
int ile_parzystych(struct element* arr) {
    int wynik = 0;
    struct element* wsk = arr;
    while(wsk->next != NULL) {
        if(wsk->i % 2 == 0) {
            wynik++;
        }
        wsk = wsk->next;
    }
    if(wsk->i % 2 == 0) {
            wynik++;
    }

    return wynik;
}

// zad 3 <- niewypał
void usun_pierwszy_parz(struct element* arr) {
    struct element* wsk = arr;
    if(wsk->i % 2 == 0) {
        wsk = wsk->next;
        free(arr);
        arr = wsk;
    }
    while(wsk->next != NULL) {
        if(wsk->i % 2 == 0) {
            struct element* prev =
            wsk = wsk->next;
            free(arr);
            arr = wsk;
        }
        wsk = wsk->next;
    }
}

// 10.06.26
// 7.3.30
struct element* doklej(struct element* arr1, struct element* arr2) {
    struct element* wsk = arr1;
    if (arr1 == NULL) {
        return arr2;
    }
    else {
        while (wsk->next != NULL) {
            wsk = wsk->next;
        }
        wsk->next = arr2;
    }
    return arr1;
}

// 7.3.32
struct element* polacz(struct element* arr1, struct element* arr2) {
    if (arr1 == NULL) {
        return NULL;
    }

    struct element* wsk = arr1;
    struct element* wsk2 = arr2;

    arr1 = arr1->next;
    wsk->next = wsk2;
    arr2 = arr2->next;
    while(arr1 != NULL) {
        wsk2->next = arr1;
        wsk2 = arr1;
        arr1 = arr1->next;
        wsk2->next = arr2;
        wsk2 = arr2;
        arr2 = arr2->next;
    }

    return wsk;
}

//7.3.31
struct element* odwroc(struct element* arr) {
    if (arr == NULL || arr->next == NULL) {
        return arr;
    }
    struct element* wsk;
    struct element* wsk2;
    wsk = arr->next;
    wsk2 = wsk->next;
    arr->next = NULL;
    wsk->next = arr;
    while (wsk2 != NULL) {
        arr = wsk;
        wsk = wsk2;
        wsk2 = wsk2->next;
        wsk->next = arr;
    }
    return wsk;
}

struct element* przesun(struct element* arr) {
    if(arr == NULL || arr->next == NULL) {
        return arr;
    }
    struct element* wsk = arr;
    while (wsk->next->next != NULL) {
        wsk = wsk->next;
    }
    struct element* wsk2 = wsk->next;
    wsk->next = NULL;
    wsk2->next = arr;

    return wsk2;
}


int main() {
    struct element* tab = utworz();
    tab = dodaj(tab, 1);
    tab = dodaj(tab, 2);
    tab = dodaj(tab, 3);
    tab = dodaj(tab, 4);
    struct element* tab2 = utworz();
    tab2 = dodaj(tab2, 9);
    tab2 = dodaj(tab2, 8);
    tab2 = dodaj(tab2, 7);
    tab2 = dodaj(tab2, 6);

    tab = przesun(tab);

    //tab = polacz(tab, tab2);
    //tab = odwroc(tab);
    //tab2 = odwroc(tab2);

    wypisz(tab);
    //printf("\n");
    //wypisz(tab2);

    return 0;
}
