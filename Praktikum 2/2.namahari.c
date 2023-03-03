/*
Nama Program  : namahari.c
Deskripsi     : Menampilkan nama nama hari dari nomor hari 1 sampai dengan 7.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 28 Februari 2023 16:50 WIB
*/

#include <stdio.h>

int main(void) {
    // Kamus Lokal
    int Nomor;

    // Algoritma
    printf("Masukkan nomor hari: ");
    scanf("%d", &Nomor);
    if (Nomor == 1) {
        printf("Hari Senin");
    } else if (Nomor == 2) {
        printf("Hari Selasa");
    } else if (Nomor == 3) {
        printf("Hari Rabu");
    } else if (Nomor == 4) {
        printf("Hari Kamis");
    } else if (Nomor == 5) {
        printf("Hari Jumat");
    } else if (Nomor == 6) {
        printf("Hari Sabtu");
    } else if (Nomor == 7) {
        printf("Hari Minggu");                
    } else {
        printf("Masukan nomor hari tidak tepat");
    }

    return 0;
}
