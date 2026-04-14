#include <stdio.h>

void wypisz_iloczyny() {
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j < i; j++) {
            if (sprawdz(i, j)) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}

int sprawdz(int x, int y) {
    int war1 = 0, war2 = 0;
    for (int i = 1; i < x*y; i++) {
        if (i*i == x*y) {
            war1 = 1;
        }
        if (i*i == (x+1)*(y+1)) {
            war2 = 1;
        }
    }
    if (war1 && war2) {
        return 1;
    }
    return 0;
}

int main() {

    wypisz_iloczyny();
    return 0;
}
