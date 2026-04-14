#include <stdio.h>

unsigned int dwa_do_n(unsigned int n) {
    unsigned int wynik = 1;
    for (int i = n; i > 0; i-- ){
        wynik *= 2;
    }
    return wynik;
}

float potaga_dwa_calk(int n) {
    float wynik = 1.0f;
    if (n < 0) {
        for (int i = -n; i > 0; i--) {
            wynik /= 2.0f;
        }
    }
    else {
        for (int i = n; i > 0; i--) {
            wynik *= 2.0f;
        }
    }
    return wynik;
}

float n_do_m(float n, int m) {
    float wynik = 1.0f;
    if (n == 0 && m != 0) {
        return 0;
    }
    if (m < 0) {
        for (int i = -m; i > 0; i--) {
            wynik /= n;
        }
    }
    else {
        for (int i = m; i > 0; i--) {
            wynik *= n;
        }
    }
    return wynik;
}

int podloga_pierwiastka(int n, int m) {
    int i = 0;
    while (n_do_m(i,m) <= n) {
        i++;
    }
    return i - 1;
}

void pary_kwadratow (int n) {
    for (int i = 1; i*i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((j*j) + (i*i) == n) {
                printf("(%d, %d)", i, j);
            }
        }
    }
}

int main() {
    pary_kwadratow(50);
    return 0;
}
