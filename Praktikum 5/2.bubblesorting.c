/*
Nama Program  : bubblesorting.c
Deskripsi     : Mengurutkan data dalam indeks secara ascending menggunakan metode bubble sorting.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 10 Mei 2023 22:36
*/

#include <stdio.h>
#include <stdalign.h>
#include <stdlib.h>

void bubbleSort(int tabel[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tabel[j] > tabel[j + 1]) {
                int temp = tabel[j];
                tabel[j] = tabel[j + 1];
                tabel[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tabel[] = {14, 4, 2, 9, 10};
    int n = sizeof(tabel) / sizeof(tabel[0]);

    printf("Sebelum bubble sorting\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tabel[i]);
    }

    bubbleSort(tabel,n);

    printf("\nSesudah bubble sorting\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tabel[i]);
    }

    return 0;
}
