/*
Nama Program  : jumderet.c
Deskripsi     : Menjumlahkan deret bilangan dari bilangan ke 1 sampai bilangan ke N dengan perulangan.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 3 Maret 2023 09:44 WIB
*/

#include <stdio.h>

int main() {
    int N;
    int i = 1;
    int total = 0;

    printf("Masukkan N: ");
    scanf("%d", &N);

    while (i <= N) {
        total += i;
        i++;
    }

    printf("Jumlah total dari deret 1 sampai deret ke-N adalah: %d\n", total);

    return 0;
}
