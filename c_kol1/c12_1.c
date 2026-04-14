#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wypisz(unsigned int n, int * tab) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n\n");
}

// 4.2.1
void zeruj(unsigned int n, int *tab) {
    for (int i = 0; i < n; i++) {
        tab[i] = 0;
    }
}

void ustaw_ind(unsigned int n, int *tab) {
    for (int i = 0; i < n; i++) {
        tab[i] = i;
    }
}

void podwoj(unsigned int n, int *tab) {
    for (int i = 0; i < n; i++) {
        tab[i] *= 2;
    }
}

// 4.2.2
int sum(unsigned int n, int *tab) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return suma;
}

int sumsqr(unsigned int n, int *tab) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i]*tab[i];
    }
    return suma;
}

double avg(unsigned int n, int *tab) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return (double)((double)suma/n);
}

// 4.2.5
int sito(unsigned int n) {
    bool liczby[n];
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == 1) {
            liczby[i] = false;
        }
        else {
            liczby[i] = true;
        }
    }
    for (int i = 2; i < n; i++) {
        if (liczby[i] == true) {
            for (int j = i+1; j < n; j++) {
                if (j % i == 0) {
                    liczby[j] = false;
                }
            }
        }
    }
    for (int i = n-1; i >= 2; i--) {
        if (liczby[i] == true) {
            return i;
        }
    }
}

// 4.2.3
double avg_const(unsigned int n, const int *tab) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return (double)((double)suma/n);
}

// blizniacze


int main() {
    // int tab[] = {4, 6, -2, 7};

    // printf("%d\n", zlicz(tab));
    // printf("%d\n", (int)(sizeof(tab)/sizeof(tab[0]))); <- Notka dla siebie - tak nie można liczyć dłogości tablicy gdy masz tablice jako parametr do f-cji(jako wskaźnik), więc nie moge zrobić f-cji zliczającej elementy bo do tego bym musiał dać tablice jako wskaźnik

    // printf("%d\n", sito(20));
    return 0;
}
