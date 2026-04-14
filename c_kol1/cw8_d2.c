#include <stdio.h>

int bankrut = 0;

void skarbiec(int x) {
    static int majatek = 500;
    static int skarbnik = 20;
    printf("Stan skarbca: %d\n", majatek);
    majatek += skarbnik;
    printf("skarbnik dodal do skarbca: %d, stan skarbca: %d\n", skarbnik, majatek);
    skarbnik += 3;
    int krolowa = (majatek/2) + (majatek % 2);
    majatek -= krolowa;
    printf("Krolowa bierze polowe, stan skarbca: %d\n", majatek);
    if (x > majatek) {
        printf("Bankructwo!");
        bankrut = 1;
    }
    else {
        printf("Krol bierze %d ze skarbca, stan skarbca: %d\n", x, majatek);
    }
}

int main() {
    while (!bankrut) {
    skarbiec(70);
    }

    return 0;
}
