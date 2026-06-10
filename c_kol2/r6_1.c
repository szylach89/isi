#include <stdlib.h>
#include <stdio.h>

int** tab(int n, int m) {
    int** tablica = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        tablica[i] = malloc(m * sizeof(int));
    }
    return tablica;
}

// 5.2.18
void wypisz(int** t, int n, int m) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d]\t", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void wpisz(int** t, int n, int m) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &t[i][j]);
        }
    }
}

// 6.2.3 <-CZM TO NIE DZIAŁA!?!??!?!?!
/*
void zwolnij_tab(int** tab, int n, int m) {
    for(int i = 0; i < n; i++) {
        free(n[i]);
    }
    free(n);
}
*/

int main() {
    int** tab1 = tab(3, 3);
    wpisz(tab1, 3, 3);
    wypisz(tab1, 3, 3);
    // zwolnij_tab(tab1, 3, 3);
    return 0;
}
