#include <stdio.h>

int main() {
    int n;

    int d, s = 0;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
    d = 1;
        for (int j = 1; j<=i; j++) {
            if (n%j==0 && i%j==0) {
                d = 0;
            }
        }
        if (d == 1) {
            s += i;
        }
    }
    printf("%d", s);

    return 0;
}
