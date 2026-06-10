#include <stdio.h>
#include <stdlib.h>

// 6.2.1
int** utworz(int n, int m) {
    int** tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        *(tab + i) = malloc(m * sizeof(int));
    }
    return tab;
}

// 6.2.3
void usun(int** tab, int n, int m) {
    for (int i = 0; i < n; i++) {
        free(*(tab+i));
    }
    free(tab);
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

// 6.2.13
int dodaj_2d(int n, int m, int tab[][m]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma += tab[i][j];
        }
    }
    return suma;
}

// 6.2.17
double max_avg_row(int** tab, int n, int m) {
    int suma;
    for (int i = 0; i < m; i++) {
        suma += *(*(tab)+i);
    }
    double avg = (double)suma/(double)m;
    if (n > 1) {
        for (int i = 1; i < n; i++) {
            suma = 0;
            for (int j = 0; j < m; j++) {
                suma += *(*(tab+i)+j);
            }
            double new_avg = (double)suma/(double)m;
            if (avg < new_avg) {
                avg = new_avg;
            }
        }
    }
    //printf("%lf\n", avg);
    return avg;
}

double sredniawierszy(int** tabtab, int n, int m) {
    //int fcount = 0;
    double srmx = 0;
    double srin;
    for(int i = 0; i < n; i++) {
        srin = 0.0;
        for(int j = 0; j < m; j++) {
            srin = srin + *(*(tabtab+i)+j);
        }
        srin = srin/m;
        //printf("%lf\n", srin);
        if((i == 0)||(srmx < srin)) {
            srmx = srin;
        }
        //fcount++;
    }
    //printf("%lf\n", srmx);
    return srmx;
}

int main() {
    int** tab = utworz(3, 2);


    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 2;
    *(*(tab+1)+0) = 60;
    *(*(tab+1)+1) = 4;
    *(*(tab+2)+0) = 90;
    *(*(tab+2)+1) = 1;

    print_arr2(tab, 3, 2);
    double wyn = sredniawierszy(tab, 3, 2);
    printf("%lf\n", wyn);

    return 0;
}
