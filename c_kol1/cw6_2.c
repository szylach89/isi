#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int wynik = 1;
    for (int i = 0; i <= n; i++) {
        int s = 1;
        for (int j = 1; j <= i; j++) {
            s *= j;
        }
        wynik += s;
    }

    printf("%d", wynik);

    return 0;
}
