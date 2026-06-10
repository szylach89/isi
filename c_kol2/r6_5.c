#include <stdio.h>
#include <stdlib.h>
#include "szylac.h"

// 6.2.30
int** sum_matrix(int** array1, int** array2, int n) {
    int ** wynik_arr = arr2(n, n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            *(*(wynik_arr + i) + j) = *(*(array1 + i) + j) + *(*(array2 + i) + j);
        }
    }
    return wynik_arr;
}

// 6.2.32
int** mul_matrix(int** array1, int** array2, int n) {
    int** wynik_arr = arr2(n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int suma = 0;
            for (int k = 0; k < n; k++) {
                suma += *(*(array1 + i) + k) * *(*(array2 + k) + j);
            }
            *(*(wynik_arr + i) + j) = suma;
        }
    }
    return wynik_arr;
}

// 6.2.33
void mul_matrix2(int** array1, int** array2, int** array3, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int suma = 0;
            for (int k = 0; k < n; k++) {
                suma += *(*(array1 + i) + k) * *(*(array2 + k) + j);
            }
            *(*(array3 + i) + j) = suma;
        }
    }
}

// 6.2.35 <--- PD

// 6.2.36 <- Nie zdążyliśmy (Na następnej będziemy robić) (13.05.2026)
/// n, m - wymiary array1; dn, dm - wiersz i kolumna do pominięcia; Przypuszczamy że array2 ma wymiary n-1, m-1;
void przepisz_arr2(int** array1, int n, int m, int** array2, int dn, int dm) {
    int ii = 0, ij = 0;
    for (int i = 0; i < n-1; i++, ii++) {
        if (i == dn) {
            ii++;
        }
        ij = 0;
        for (int j = 0; j < m-1; j++, ij++) {
            if (j == dm) {
                ij++;
            }
            *(*(array2 + i) + j) = *(*(array1 + ii) + ij);
        }
    }
}

int det(int** array1, int n) {
    if (n == 2) {
        return (*(*(array1 + 0) + 0) * *(*(array1 + 1) + 1)) - (*(*(array1 + 0) + 1) * *(*(array1 + 1) + 0));
    }
    else {
        int wynik = 0;
        for (int i = 0; i < n; i++) {
            int** arr = arr2(n-1, n-1);
            przepisz_arr2(array1, n, n, arr, 0, i);
            if (i % 2 == 0) {
                wynik += *(*(array1 + 0) + i) * det(arr, n - 1);
            }
            else {
                wynik += -*(*(array1 + 0) + i) * det(arr, n - 1);
            }
            free_arr2(arr, n-1);
        }
        return wynik;
    }
}


int main() {
    int** tab1 = arr2(3, 3);
    *(*(tab1+0)+0) = 1;
    *(*(tab1+0)+1) = 2;
    *(*(tab1+0)+2) = 3;
    *(*(tab1+1)+0) = 5;
    *(*(tab1+1)+1) = 7;
    *(*(tab1+1)+2) = 8;
    *(*(tab1+2)+0) = 4;
    *(*(tab1+2)+1) = 9;
    *(*(tab1+2)+2) = 0;

    printf("%d\n", det(tab1, 3));

    return 0;
}
