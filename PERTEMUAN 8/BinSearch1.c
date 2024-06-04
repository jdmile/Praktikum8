#include <stdio.h>
#include <stdbool.h> 

void BinSearch1(int T[], int N, int X, bool *Found, int *IX) {
    int Atas = 0;
    int Bawah = N - 1;
    int Tengah = X - 1;
    *Found = false;

    while (Atas <= Bawah && !(*Found)) {
        Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            *Found = true;
            *IX = Tengah;
        } else if (X < T[Tengah]) {
            Bawah = Tengah - 1;
        } else {
            Atas = Tengah + 1;
        }
    }
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29};
    int N = 13;

    int X1 = 52;
    bool Found1;
    int IX1;
    BinSearch1(T, N, X1, &Found1, &IX1);

    if (Found1) {
        printf("X = %d ditemukan pada indeks %d.\n", X1, IX1);
    } else {
        printf("X = %d tidak ditemukan.\n", X1);
    }


    int X2 = 10;
    bool Found2;
    int IX2;
    BinSearch1(T, N, X2, &Found2, &IX2);

    if (Found2) {
        printf("X = %d ditemukan pada indeks %d.\n", X2, IX2);
    } else {
        printf("X = %d tidak ditemukan.\n", X2);
    }

    return 0;
}