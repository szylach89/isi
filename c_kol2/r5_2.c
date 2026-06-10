#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


// 5.2.13
void wytnijtm(char n1[], char n2[]) {
    int i, j;
    for (i = 0, j = 0;n1[i] != 0; i++) {
        if (n1[i] != n2[i]) {
            n1[j] = n1[i];
            j++;
        }
    }
    n1[j] = 0;
}

// 5.2.22
char* sklej(char* n1, char* n2, char* n3) {
    char* wynik = malloc((strlen(n1) + strlen(n2) + strlen(n3)) * sizeof(char));
    strcpy(wynik, n1);
    strcat(wynik, n2);
    strcat(wynik, n3);
    return wynik;
}

// 5.2.26
void naduze(char n[]) {
    for (int i = 0; n[i] != 0; i++) {
        n[i] = toupper(n[i]);
    }
}

int main() {
    char nap1[] = "arbuz";
    char nap2[] = "baobab";
    char nap3[] = "czekolada";

    naduze(nap1);

    printf("%s\n", nap1);

    return 0;
}
