#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 3.2.5
int wsk_sum(const int *a, const int *b) {
    return *a + *b;
}

// 3.2.6
void wrt_wsk(int n, int *w) {
    *w = n;
}

// 3.2.9
int *zmienna() {
    return malloc(sizeof(int));
}

// 3.2.9
double *zmienna_d() {
    return malloc(sizeof(double));
}

// 3.2.11
int *blok_int(int n) {
    return calloc(n, sizeof(int));
}

// 2.3.12
double *blok_dbl(unsigned int n) {
    return calloc(n, sizeof(double));
}

// 3.2.13
double func(int x) {
    return (double)(x*x);
}

double wsk_func(double (*f)(int), int x) {
    return f(x);
}

// 3.2.14
bool tf(int (*f)(int), int (*g)(int), unsigned int n) {
    for (int i = 0; i <=n; i++) {
        if (f(n) != g(n)) {
            return false;
        }
        return true;
    }
}

int ffunc(int x) {
    return x;
}

int gfunc(int x) {
    return 3*x;
}

int main() {

    printf("%s\n", (tf(ffunc, gfunc, 1)) ? "true" : "false");
    return 0;
}
