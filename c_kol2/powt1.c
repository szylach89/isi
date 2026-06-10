#include <stdio.h>
#include <stdlib.h>

// 5.2.1
char* wyczysc(char napis[]) {
    napis = '\0';
    return napis;
}

// 5.2.2
int dlugosc(char* napis) {
    int i = 0;
    while(napis[i] != '\0') {
        i++;
    }
    return i;
}

// 5.2.3
int porownaj(char* nap1, char* nap2) {
    if (dlugosc(nap1) == dlugosc(nap2)) {
        for (int i = 0; i < dlugosc(nap1); i++) {
            if (nap1[i] != nap2[i]) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

// 5.2.7
void sklej(char* nap1, char* nap2, char nap3[]) {
    int i,j;
    for (i = 0; nap1[i] != 0; i++) {
        nap3[i] = nap1[i];
    }
    for (j = 0; nap2[j] != 0; j++) {
        nap3[i+j] = nap2[j];
    }
    nap3[i+j+1] = 0;
}

int main() {
    char* nap = "Costam";
    char* nap2 = "Cos";
    char nap3[30];

    sklej(nap, nap2, nap3);

    printf("%s\n", nap3);

    return 0;
}

