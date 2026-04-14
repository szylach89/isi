#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
    Zadania nie są wszystkie (nie chciało mi się pisać wszystkich zadań z podstaw, oraz zadań z krzaczkowskiego jest dużo).
*/

int main() {
    // zad 1.2.1
    printf("Hello, world!\n");

    // zad 1.2.2
    printf("Bardzo\ndlugi\nnapis\n");

    // zad 1.2.3
    printf("Napis zawierajacy dziwne znaki // \\ \\ $ & %%\n");

    // zad 1.2.4
    int a;
    scanf("%d", &a);

    printf("%d\n", a);

    // zad 1.2.5
    float b;
    scanf("%f", &b);

    printf("%f\n", b);

    // zad 1.2.6
    int c,d,e;
    scanf("%d%d%d", &c, &d, &e);
    printf("%d\n%d\n%d\n", c, d, e);


    // zad 1.2.9
    float f;
    scanf("%f", &f);
    printf("%f\n", sqrt(f));

    // zad 1.2.11
    float g;
    scanf("%f", &g);
    printf("%.2f\n", g);

    // zad 1.2.12
    float h;
    scanf("%f", &h);
    printf("%e\n", h);

    // zad 1.3.1
    int i;
    scanf("%d", &i);
    printf("%d\n", (i < 0) ? -i : i);

    // zad 1.3.2
    int j,k;
    scanf("%d%d", &j, &k);
    if (j < k) {
        printf("%d\n", k);
    }
    else {
        printf("%d\n", j);
    }

    // zad 1.3.4
    int l,m;
    scanf("%d%d", &l, &m);
    int ll = (l < 0) ? -l : l;
    int lm = (m < 0) ? -m : m;
    if (ll > lm) {
        printf("%d\n", l);
    }
    else {
        printf("%d\n", m);
    }

    // 1.3.9
    int n,o,p;
    scanf("%d%d", &o, &p);
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("%d\n", o + p);
            break;
        case 2:
            printf("%d\n", o - p);
            break;
        case 3:
            printf("%d\n", o * p);
            break;
        case 4:
            printf("%d\n", o / p);
            break;
    }


    return 0;
}
