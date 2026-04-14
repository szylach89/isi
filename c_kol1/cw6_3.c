#include <stdio.h>

// zad 2.2.1
int modul(int n) {
    return (n < 0) ? -n : n;
}

// zad 2.2.2
int silnia(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}

int silnia_p() {
    int n;
    scanf("%d", &n);
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    printf("%d\n", s);
}

int silnia_rek(int n) {
    if (n > 0) {
        return n * silnia_rek(n-1);
    }
    else {
        return 1;
    }
}

int suma_silni(int n) {
    int suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += silnia_rek(i);
    }
    return suma;
}

int suma_silni_r(int n) {
    return silnia(n) + suma_silni(n-1);
}

// 2.2.3
int max_dz(int n) {
    int d = 1;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            d = i;
        }
    }
    return d;
}

/// PD 2.2.8(zwraca i wypisuje), 2.2.11

int main() {
    int n;
    scanf("%d", &n);

    // printf("%d\n", silnia(n));

    // silnia_p();

    // printf("%d", silnia_rek(n));

    // printf("%d", suma_silni_r(n));

    // max_dz(n);

    return 0;
}
