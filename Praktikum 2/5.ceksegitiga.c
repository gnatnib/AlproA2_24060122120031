/*
Nama Program  : segitiga.c
Deskripsi     : Menampilkan jenis bilangan apakah bilangan tersebut merupakan bilangan bulat positif, negatif atau nol, jika bukan bilangan maka program akan menampilkan "Bukan termasuk bilangan"
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 28 Februari 2023 23:10 WIB
*/

#include <stdio.h>
int main(void) {
    // Kamus Lokal
    int sisia;
    int sisib;
    int sisic;

    // Algoritma
    printf("Masukkan nilai sisi a: ");
    scanf("%d", &sisia);

    printf("Masukkan nilai sisi b: ");
    scanf("%d", &sisib);
    
    printf("Masukkan nilai sisi c: ");
    scanf("%d", &sisic);

    if (sisia <= 0 || sisib <= 0 || sisic <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga");
    } else {
        if (sisia == sisib && sisib == sisic) {
            printf("Segitiga Sama Sisi");
        } else if (sisia == sisib || sisia == sisic || sisib == sisic) {
            printf("Segitiga Sama Kaki");
        } else {
            printf("Segitiga Sembarang");
        }
    }

    return 0;
}