#ifndef SZYLAC_H
#define SZYLAC_H

/*
    -[x] Funkcja tworząca tablice tablic
    -[x] Funkcja zwalniająca tablice tablic
    -[x] Print tablicy tablic
    -[x] Print tablicy 2D
    -[x] Funkcja przypisująca podaną wartość dla każdego elementu (2D i tablica tablic)
    -[x] Funkcja wpisująca jedynki do elementów tablicy (2D i tablica tablic)
    -[x] Funkcja wpisująca kolejne liczby do tablicy (2D i tablica tablic)
*/

int** arr2(int n, int m);

void free_arr2(int** arr, int n);

void print_arr2(int** arr, int n, int m);

void print_2darr(int n, int m, int arr[][m]);

void set_number_arr2(int number, int** arr, int n, int m);

void set_number_2darr(int number, int n, int m, int arr[][m]);

void ones_arr2(int** arr, int n, int m);

void ones_2darr(int n, int m, int arr[][m]);

void arange_2darr(int start, int n, int m, int arr[][m]);

void arange_arr2(int start, int** arr, int n, int m);

#endif // SZYLAC_H
