#include <stdlib.h>
#include <stdio.h>
#include "szylac.h"

int** arr2(int n, int m) {
    int** arr = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        *(arr + i) = (int*)calloc(m, sizeof(int));
    }
    return arr;
}

void free_arr2(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        free(*(arr+i));
    }
    free(arr);
}

void print_arr2(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", *(*(arr + i) + j));
        }
        printf("\n");
    }
    printf("\n");
}

void print_2darr (int n, int m, int arr[][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void set_number_arr2(int number, int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(*(arr + i) + j) = number;
        }
    }
}

void set_number_2darr(int number, int n, int m, int arr[][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = number;
        }
    }
}

void ones_arr2(int** arr, int n, int m) {
    set_number_arr2(1, arr, 3, 3);
}

void ones_2darr(int n, int m, int arr[][m]) {
    set_number_2darr(1, n, m, arr);
}

void arange_2darr(int start, int n, int m, int arr[][m]) {
    int num = start;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = num++;
        }
    }
}

void arange_arr2(int start, int** arr, int n, int m) {
    int num = start;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(*(arr + i) + j) = num++;
        }
    }
}
