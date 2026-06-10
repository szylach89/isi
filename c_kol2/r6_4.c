#include <stdio.h>
#include <stdlib.h>

int** Arr (int n, int m) {
    int** tablica = (int**)calloc(sizeof(int*), n);
    for (int i = 0; i < n; i++) {
        *(tablica + i) = (int*)calloc(sizeof(int), m);
    }
    return tablica;
}

void free_arr(int n, int m, int** arr) {
    for (int i = 0; i < n; i++) {
        free(*(arr+n));
    }
    free(arr);
}

void prnt_arr(int n, int m, int **arr) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }
}

void prnt_2d_arr(int n, int m, int arr[][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }
}

// 6.2.23
void step_down(int n, int m, int arr[][m]) {
    int* last_row = (int*)calloc(sizeof(int), m);
    for (int i = 0; i < m; i++) {
        *(last_row + i) = arr[n-1][i];
    }
    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            arr[i+1][j] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        arr[0][i] = *(last_row + i);
    }
    free(last_row);
}

void transpose(int n, int m, int** arr) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int temp = *(*(arr+j)+i);
            *(*(arr+j)+i) = *(*(arr+i)+j);
            *(*(arr+i)+j) = temp;
        }
    }
}

int main() {
    //int tab[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // step_down(3,3,tab);
    //prnt_2d_arr(3,3,tab);
    int** tab = Arr(3,3);
    *(*(tab+0)+0) = 1;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 3;
    *(*(tab+1)+0) = 4;
    *(*(tab+1)+1) = 5;
    *(*(tab+1)+2) = 6;
    *(*(tab+2)+0) = 7;
    *(*(tab+2)+1) = 8;
    *(*(tab+2)+2) = 9;

    transpose(3, 3, tab);

    prnt_arr(3,3,tab);
    return 0;
}
