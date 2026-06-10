#include <stdio.h>
#include <math.h>

// 7.2.1
struct Trojkat {
    double a;
    double b;
    double c;
};

double obwod(struct Trojkat t) {
    return t.a + t.b + t.c;
}

// Dodatkowe
double poleTroj(struct Trojkat t) {
    double p = (t.a + t.b + t.c)/2;
    return sqrt(p*((p-t.a)*(p-t.b)*(p-t.c)));
}

// Dodatkowe
void czyTroj(struct Trojkat t) {
    if (t.a > 0 && t.b > 0 && t.c > 0) {
        if ((t.a + t.b > t.c) && (t.a + t.c > t.b) && (t.c + t.b > t.a)) {
            printf("Podana struktura jest trójkątem.\n");
        }
        else {
            printf("Podana struktura nie jest trójkątem.\n");
        }
    }
    else {
        printf("Podana struktura nie jest trójkątem.\n");
    }
}

// 7.2.2
void przepiszTrojkat(struct Trojkat troj1, struct Trojkat* troj2) {
    *troj2 = troj1;
}

int main() {
    struct Trojkat t1 = {3, 4, 5};
    struct Trojkat t2;

    printf("%lf %lf %lf\n", t2.a, t2.b, t2.c);

    przepiszTrojkat(t1, &t2);

    printf("%lf %lf %lf\n", t2.a, t2.b, t2.c);

    return 0;
}
