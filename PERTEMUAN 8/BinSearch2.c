#include <stdio.h>
#include <stdbool.h>

void BinSearch(int T[], int N, int X, bool *Found, int *IX) {
    int Atas = 0;
    int Bawah = N - 1;
    int Tengah;

    Tengah = (Atas + Bawah) / 2;

    while (Atas <= Bawah && T[Tengah] != X) {
        if (X < T[Tengah]) {
            Bawah = Tengah - 1;
        } else {
            Atas = Tengah + 1;
        }
        Tengah = (Atas + Bawah) / 2;
    }

    if (Tengah >= 0 && Tengah < N && T[Tengah] == X) {
        *Found = true;
        *IX = Tengah;
    } else {
        *Found = false;
        *IX = -1;
    }
}

int main() {
    int T[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = 13;

    int X1 = 21;
    bool Found1;
    int IX1;
    BinSearch(T, N, X1, &Found1, &IX1);

    if (Found1) {
        printf("X = %d ditemukan pada indeks %d.\n", X1, IX1);
    } else {
        printf("X = %d tidak ditemukan.\n", X1);
    }

    int X2 = 50;
    bool Found2;
    int IX2;
    BinSearch(T, N, X2, &Found2, &IX2);

    if (Found2) {
        printf("X = %d ditemukan pada indeks %d.\n", X2, IX2);
    } else {
        printf("X = %d tidak ditemukan.\n", X2);
    }

    return 0;
}
