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

// 6.2.16
int max_row_avg(int n, int m, int** tab) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += *(*(tab+0)+i);
    }
    int row = 0;
    float avg = sum/m;
    for (int i = 1; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            sum += *(*(tab+i)+j);
        }
        if (sum/m > avg) {
            row = i;
            avg = sum/m;
        }
    }
    return row;
}

// 6.2.17
float max_row_avg_value(int n, int m, int** tab) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += *(*(tab+0)+i);
    }
    float avg = sum/(float)m;
    for (int i = 1; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            sum += *(*(tab+i)+j);
        }
        if (sum/m > avg) {
            avg = sum/(float)m;
        }
    }
    return avg;
}

// 6.2.21
void rev_arr(int n, int m, int arr[][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m/2; j++) {
            int temp = arr[i][m-1];
            arr[i][m-1-j] = arr[i][j];
            arr[i][j] = temp;
        }
    }
}

int main() {
    int** tab = Arr(2,2);
    *(*(tab+0)+0) = 0;
    *(*(tab+0)+1) = 2;
    *(*(tab+1)+0) = 3;
    *(*(tab+1)+1) = 4;

    prnt_arr(2,2, tab);

    //printf("%f\n", max_row_avg_value(2,2, tab));

    free_arr(2,2, tab);

    int tab2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rev_arr(3,3,tab2);
    prnt_2d_arr(3, 3, tab2);


    /*
        NOTE - Tablice 2D(int tab[][]), NIE działają jak tablice tablic(int** tab).
        Nie można używać funkcji na bazie jednych do działania na drugich
        (Wyskoczy 'incompatible-pointer-type' albo że podana wartość się nie zgadza etc.)

        ORAZ do odwoływania się do elementów tablic tablic używa się *(*(arr+i)+j)
        gdy do tablic 2D używa się arr[i][j]
    */
    return 0;
}
