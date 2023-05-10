/*
Nama Program  : insertion.c
Deskripsi     : Mengurutkan data dalam indeks secara descending menggunakan metode insertion sorting.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 11 Mei 2023 00:41
*/

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int tabel[], int N) {
    int i, step, Temp;
    
    for (step = 1; step < N; step++) {
        Temp = tabel[step];
        i = step - 1;
        while (i >= 0 && Temp > tabel[i]) {
            tabel[i + 1] = tabel[i];
            i--;
        }
        tabel[i + 1] = Temp;
    }
}

int main() {
    int tabel[] = {1, 3, 4, 5, 10};
    int n = sizeof(tabel) / sizeof(tabel[0]);

    printf("Sebelum insertion sorting\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tabel[i]);
    }

    insertionSort(tabel, n);

    printf("\nSesudah insertion sorting\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tabel[i]);
    }

    return 0;
}
