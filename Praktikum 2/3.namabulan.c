/*
Nama Program  : namaBulan.c
Deskripsi     : Menampilkan nama nama Bulan dari nomor Bulan 1 sampai dengan 12.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 28 Februari 2023 20:43 WIB
*/

#include <stdio.h>

int main(void) {
    // Kamus Lokal
    int Nomor;

    // Algoritma
    printf("Masukkan nomor Bulan: ");
    scanf("%d", &Nomor);
    if (Nomor == 1) {
        printf("Bulan Januari");
    } else if (Nomor == 2) {
        printf("Bulan Februari");
    } else if (Nomor == 3) {
        printf("Bulan Maret");
    } else if (Nomor == 4) {
        printf("Bulan April");
    } else if (Nomor == 5) {
        printf("Bulan Mei");
    } else if (Nomor == 6) {
        printf("Bulan Juni");
    } else if (Nomor == 7) {
        printf("Bulan Juli");
    } else if (Nomor == 8) {
        printf("Bulan Agustus");
    } else if (Nomor == 9) {
        printf("Bulan September");
    } else if (Nomor == 10) {
        printf("Bulan Oktober");
    } else if (Nomor == 11) {
        printf("Bulan November");
    } else if (Nomor == 12) {
        printf("Bulan Desember");                                    
    } else {
        printf("Masukan nomor bulan tidak tepat");
    }

    return 0;
}
