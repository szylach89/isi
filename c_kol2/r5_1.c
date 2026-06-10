#include <stdio.h>
#include <stdlib.h>

// 5.2.2
int dlugosc(char napis[]) {
    int i = 0;
    while (napis[i] != 0) {
        i++;
    }
    return i;
}

// 5.2.5
void przepisz(char napis1[], char napis2[]) {
    for (int i = 0; i < dlugosc(napis1); i++) {
        napis2[i] = napis1[i];
    }
    napis2[dlugosc(napis1)] = 0;
}

// 5.2.6
void kopiujn(char napis1[], char napis2[], int n) {
    int ile = (n < dlugosc(napis1)) ? n : dlugosc(napis1);
    for (int i = 0; i < ile; i++) {
        napis2[i] = napis1[i];
    }
    napis2[ile] = 0;
}

// 5.2.7
void sklej(char n1[], char n2[], char n3[]) {
    for (int i = 0; i < dlugosc(n1); i++) {
        n3[i] = n1[i];
    }
    for (int i = dlugosc(n1); i < dlugosc(n1) + dlugosc(n2); i++) {
        n3[i] = n2[i-dlugosc(n1)];
    }
    n3[dlugosc(n1) + dlugosc(n2)] = 0;
}

// dodatkowe <- z jakiegoś powodu nie działa gdy jedna z tablic ma nieparzystą liczbę liter
void nazmiane(char n1[], char n2[], char n3[]) {
    int full_len = dlugosc(n1) + dlugosc(n2);
    int i;
    if (dlugosc(n1) <= dlugosc(n2)) {
        int i = 0, in1 = 0, in2 = 0;
        for (i = 0; i < dlugosc(n1) * 2; i++) {
            if (i % 2 == 0) {
                n3[i] = n1[in1];
                in1++;
            }
            else {
                n3[i] = n2[in2];
                in2++;
            }
        }
        for (i; i < i + (dlugosc(n2) - dlugosc(n1)); i++) {
            n3[i] = n2[in2];
            in2++;
        }

    }
    else {
        int i = 0, in1 = 0, in2 = 0;
        for (int i = 0; i < dlugosc(n2) * 2; i++) {
            if (i % 2 == 0) {
                n3[i] = n1[in1];
                in1++;
            }
            else {
                n3[i] = n2[in2];
                in2++;
            }
        }
        printf("%d\n", in1);
        for (int i = 2 * dlugosc(n2); i < i + (dlugosc(n1) - dlugosc(n2)); i++) {
            printf("%d\n", i);
            n3[i] = n1[in1];
            in1++;
        }
    }
}

// 5.2.8
void naduze(char n1[]) {
    for (int i = 0; i < dlugosc(n1); i++) {
        if (n1[i] >= 'a' && n1[i] <= 'z') {
            n1[i] -= 32;
        }
    }
}

int main() {
    char n1[] = "Abc";
    char n2[] = "abcde";
    char wyn[40];

    naduze(n2);
    printf("%s", n2);

    return 0;
}
