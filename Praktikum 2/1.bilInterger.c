/*
Nama Program  : bilangan.c
Deskripsi     : Menampilkan jenis bilangan apakah bilangan tersebut merupakan bilangan bulat positif, negatif atau nol, jika bukan bilangan maka program akan menampilkan "Bukan termasuk bilangan"
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 28 Februari 2023 15:20 WIB
*/

#include <stdio.h>
int main(void) {
    // Kamus Lokal
    int Bilangan;

    // Algoritma
    printf("Masukkan nilai input: ");
    if (scanf("%d", &Bilangan) == 1) {
        if (Bilangan > 0) {
            printf("Bilangan bulat positif");
        } else if (Bilangan == 0) {
            printf("Bilangan tersebut bernilai nol");
        } else {
            printf("Bilangan bulat negatif");
        }
    } else {
        printf("Bukan merupakan bilangan");
    }

    return 0;
}
