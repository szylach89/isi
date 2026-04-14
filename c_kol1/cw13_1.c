#include <stdio.h>
#include <stdlib.h>

void wypisz(unsigned int n, int *tab) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n\n");
}

void wypisz_f(unsigned int n, double *tab) {
    for (int i = 0; i < n; i++) {
        printf("%lf\t", tab[i]);
    }
    printf("\n\n");
}

// 4.2.6
/// a
void przypisz(int n, int *tab1, int *tab2) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}

/// a
void przypisz_r(int n, int *tab1, int *tab2) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[n - 1 - i];
    }
}

// 4.2.7
/// a
void dodaj(int n, int *tab1, int *tab2, int *tab3) {
    for (int i = 0; i < n; i++) {
        tab3[i] = tab1[i] + tab2[i];
    }
}

/// b
void pmax(int n, int *tab1, int *tab2, int *tab3) {
    for (int i = 0; i < n; i++) {
        if (tab1[i] > tab2[i]) {
            tab3[i] = tab1[i];
        }
        else {
            tab3[i] = tab2[i];
        }
    }
}

/// c
void switcheroo(int n, int *tab1, int *tab2, int *tab3) {
    for (int i = 0; i < n; i++) {
        int t = tab3[i];
        tab3[i] = tab2[i];
        tab2[i] = tab1[i];
        tab1[i] = t;
    }
}

// 4.2.8
/// a
void dtab(int n, double *tab1, double *tab2, double *tab3) {
    for (int i = 0; i < 2 * n; i++) {
        if (i < n) {
            tab3[i] = tab1[i];
        }
        else {
            tab3[i] = tab2[i - n];
        }
    }
}

/// b
void dtabi(int n, double *tab1, double *tab2, double *tab3) {
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) {
            tab3[i] = tab2[ i / 2 ];
        }
        else {
            tab3[i] = tab1[(i - 1) / 2];
        }
    }
}

// 4.2.9
void porow(int n, int *tab1, int *tab2, int *tab3) {
    int max, min, mid;
    for (int i = 0; i < n; i++) {
        if (tab2[i] > tab1[i] && tab2[i] > tab3[i]) {
            max = tab2[i];
        }
        else if (tab3[i] > tab1[i] && tab3[i] > tab2[i]) {
            max = tab3[i];
        }
        else {
            max = tab1[i];
        }

        if (tab2[i] < tab1[i] && tab2[i] < tab3[i]) {
            min = tab2[i];
        }
        else if (tab3[i] < tab1[i] && tab3[i] < tab2[i]) {
            min = tab3[i];
        }
        else {
            min = tab1[i];
        }

        mid = (tab1[i] + tab2[i] + tab3[i]) - min - max;

        tab1[i] = max;
        tab2[i] = mid;
        tab3[i] = min;
    }
}

// 4.2.10
/// a
int max(int n, int *tab) {
    int max = tab[0];
    for (int i = 0; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

/// b
int min(int n, int *tab) {
    int min = tab[0];
    for (int i = 0; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

/// c
int maxi(int n, int *tab) {
    int max = tab[0], index = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
            index = i;
        }
    }
    return index;
}

// 4.2.11
double skalar(int n, double *tab1, double *tab2) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab1[i] + tab2[i];
    }
    return suma;
}

// 3.2.12
/// a
void swap(int n, int *tab) {
    for (int i = 0; i < n / 2; i++) {
        int t = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = t;
    }
}

/// b
void to_left(int n, int *tab) {
    int first = tab[0];
    for (int i = 1; i < n; i++) {
        tab[i-1] = tab[i];
    }
    tab[n-1] = first;
}

int main() {
    double tab1[4] = {1, 3, 5, 7};
    double tab2[4] = {0, 2, 4, 6};
    int tab3[5] = {3, 1, 3, 8, 0};

    swap(5, tab3);
    wypisz(5, tab3);


    return 0;
}
