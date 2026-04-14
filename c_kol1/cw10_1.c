#include <stdio.h>

// 2.2.29
int euklides(int n, int m) {
    if (n == 0) {
        return m;
    }
    if (m == 0) {
        return n;
    }
    if (n < m) {
        return euklides(n, m % n);
    }
    if (m < n) {
        return euklides(m, n % m);
    }
}

// 3.2.1
int porow(int *a, int *b) {
    return (*a < *b) ? *a : *b;
}

// 3.2.5
int dodaj(const int *a, const int *b) {
    return *a + *b;
}

void plus5(int *x) {
    *x += 5;
}

// 3.2.2
int *wskaz(int *a, int *b) {
    return (*a < *b) ? a : b;
}


int main() {
    int x = 10, y = 5;
    printf("%p\n", wskaz(&x, &y));

    return 0;
}
