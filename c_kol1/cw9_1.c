#include <stdio.h>

// 2.2.20
int silnia(int n) {
    if (n == 0){
        return 1;
    }
    return n * silnia(n-1);
}


// 2.2.21
int wyciagu(int n) {
    if (n==0) {
        return 1;
    }
    return (2*wyciagu(n-1)) + 5;
}

// 2.2.22
int wy2ciagu(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return wy2ciagu(n-1) + (2 * wy2ciagu(n-2)) + 3;
}

// 2.2.23
int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

// 2.2.24
int csum(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int wynik = 0;
    for (int i = 0; i <= n; i++) {
        wynik += csum(i);
    }
    return wynik;
}

// 2.2.25
int parniepar(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return parniepar(n-1) + n;
    }
    return parniepar(n-1) * n;
}

// 2.2.26
int trzymod(int n) {
    if( n == 0 || n == 1 || n == 2) {
        return 1;
    }
    if (n % 3 == 0) {
        return trzymod(n-1) + trzymod(n-2);
    }
    if (n % 3 == 1) {
        return 5 * trzymod(n-1) + 4;
    }
    if (n % 3 == 2) {
        return trzymod(n-1);
    }
}

// 2.2.28
int nm(int n, int m) {
    if (n == 0) {
        return m;
    }
    if (m == 0) {
        return n;
    }
    return nm(n - 1, m) + nm(n,m - 1) + nm(n - 1, m - 1);
}

// dodatkowe (Cos nie dziala :/ )
void szukajnm(int s) {
    int n = 0, i = 0, j = 0;
    for (i; i <= i+j; i++) {
        for (j; j <= i+j; j++) {
            if (i + j == s) {
                n += 1;
                if (nm(i,j) >= s) {
                    printf("Wartosc pary %d (%d, %d) jest ponad podana wartosc.", n, i, j);
                    break;
                }
            }
        }
    }
}

int main() {
    szukajnm(100);
    return 0;
}
