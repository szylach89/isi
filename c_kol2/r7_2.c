#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punkt3D {
    double x;
    double y;
    double z;
};

struct Zespolone {
    double re, im;
};

// 7.2.10
union super_int {
    int i;
    unsigned int u;
};

struct wiele_int {
    int i;
    unsigned int u;
};

// 7.2.3
double dlg_odc3D(double x1, double y1, double z1, double x2, double y2, double z2) {
    double x3 = (x1 > x2) ? (x1*x1)-(x2*x2) : (x2*x2)-(x1*x1);
    double y3 = (y1 > y2) ? (y1*y1)-(y2*y2) : (y2*y2)-(y1*y1);
    double z3 = (z1 > z2) ? (z1*z1)-(z2*z2) : (z2*z2)-(z1*z1);
    return sqrt(x3) + sqrt(y3) + sqrt(z3);
}

// 7.2.7
struct Zespolone Dodaj(struct Zespolone z1, struct Zespolone z2) {
    struct Zespolone wynik = {.re = z1.re + z2.re, .im = z1.im + z2.im};
    return wynik;
}

double min_odl(int n, struct Punkt3D arr[n]) {
    double min = dlg_odc3D(arr[0].x, arr[0].y, arr[0].z, arr[1].x, arr[1].y, arr[1].z);
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            double odl = dlg_odc3D(arr[i].x, arr[i].y, arr[i].z, arr[j].x, arr[j].y, arr[j].z);
            if (odl < min) {
                min = odl;
            }
        }
    }
    return min;
}

#pragma pack (1)
struct TEST {
    char c;
    int i;
};

int main() {
    // struct Zespolone a = {3, 5};
    // struct Zespolone b = {-2, 7};
    // struct Zespolone wyn = Dodaj(a, b);
    // printf("%f + %fi\n", wyn.re, wyn.im);

    union super_int si;
    struct wiele_int wi;

    struct TEST t;

    printf("%p\n", &si);
    printf("%p\n", &si.i);
    printf("%p\n", &si.u);
    printf("%d\n", sizeof(si));
    printf("---------\n");
    printf("%p\n", &wi);
    printf("%p\n", &wi.i);
    printf("%p\n", &wi.u);
    printf("%d\n", sizeof(wi));
    printf("---------\n");
    printf("%d\n", sizeof(t));

    return 0;
}
