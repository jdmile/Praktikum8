#include <stdio.h>

void SEQSearchWithSentinel(int T[], int N, int X, int *IX) {
    int i = 0;
    T[N] = X; // Pasang sentinel

    while (T[i] != X) {
        i++;
    }

    if (i < N) {
        *IX = i + 1; // Indeks ditemukan
    } else {
        *IX = 0; // Sentinel, berarti tidak ketemu
    }
}

int main() {
    int T[11] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29}; // Ukuran array dibuat 11 untuk menampung sentinel
    int N = 10;

    int X1 = 52;
    int IX1;
    SEQSearchWithSentinel(T, N, X1, &IX1);

    if (IX1 != 0) {
        printf("X = %d ditemukan pada indeks %d.\n", X1, IX1);
    } else {
        printf("X = %d tidak ditemukan.\n", X1);
    }

    int X2 = 10;
    int IX2;
    SEQSearchWithSentinel(T, N, X2, &IX2);

    if (IX2 != 0) {
        printf("X = %d ditemukan pada indeks %d.\n", X2, IX2);
    } else {
        printf("X = %d tidak ditemukan.\n", X2);
    }

    return 0;
}
