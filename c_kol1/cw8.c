#include <stdio.h>

void licz() {
    static int wynik = 0;
    wynik++;
    printf("Fynkcja zostala wywolana %d raz/y\n", wynik);
}

int st_sum(int x) {
    static int suma = 0;
    suma += x;
    printf("Suma argumentow: %d\n", suma);
    return x;
}

int main() {
    st_sum(5);
    st_sum(9);
    st_sum(3);
    st_sum(1);

    return 0;
}
