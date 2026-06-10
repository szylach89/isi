#include <stdio.h>
#include <stdlib.h>

int dl(char *n) {
    int i = 0;
    while (n[i] != 0) {
        i++;
    }
    return i;
}

void convert(char n[]) {
    int pd = 0, i = 0, dlg = dl(n);
    for (i; n[i] !='.'; i++) {
        if (n[i] >= 'A' && n[i] <='Z' && !pd) {
            pd = 1;
        }
        else if (n[i] >= 'A' && n[i] <='Z' && pd) {
            n[i] += 32;
        }
    }
    pd = 0;
    for (i; i < dlg; i++) {
        if (n[i+1] >= 'A' && n[i+1] <='Z' && !pd) {
            n[i] = n[i+1];
            pd = 1;
        }
        else if (n[i+1] >= 'A' && n[i+1] <='Z' && pd) {
            n[i] = n[i+1] + 32;
        }
    }
    n[dlg-1] = 0;
}

int main() {
    char nap[] = "SZYMON.LACHOWICZ";
    convert(nap);
    printf("%s\n", nap);

    return 0;
}
