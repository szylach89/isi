#include <stdio.h>
#include <stdlib.h>

// 6.2.7
int** triarr(int n) {
    int** arr = malloc(n * sizeof(int));
    for (int i = n - 1, j = 0; i < 0; i--, j++) {
        arr[j] = malloc(i * sizeof(int));
    }
    return arr;
}

void ptarr(int n, int **arr) {
    int l = n;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            printf("[%d] ", arr[i][j]);
        }
        printf("\n");
        l--;
    }
}

// 6.2.8
void nap05(int arr[][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 0;
        }
    }
}

void p2darr(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void p2darr2(int n, int m, int** arr) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// 6.2.10
void nap0(int n, int m, int **arr) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }
}

int** tab(int n, int m) {
    int** tablica = calloc(n, sizeof(int));
    // printf("%p\n", tablica);
    for (int i = 0; i < n; i++) {
        tablica[i] = calloc(m, sizeof(int));
        // printf("%p\n", tablica[i]);
    }
    return tablica;
}

/// Dodatkowe
void tarcza(int n, int** arr) {
    for (int i = 0; i < n; i++) {
        arr[0][i] = 1;
    }
    for (int i = 0; i < n; i++) {
        arr[n-1][i] = 1;
    }
}

int main() {
    int** tab1 = tab(6, 6);
    // nap0(6, 6, tab1);
    // tarcza(6, tab1);
    tab1[0][0] = 4;
    tab1[5][5] = -61;
    tab1[3][3] = 42;
    p2darr2(6,6, tab1);

    return 0;
}
