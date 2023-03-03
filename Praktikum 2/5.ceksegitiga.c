/*
Nama Program  : ceksegitiga.c
Deskripsi     : Mengecek ketiga sisi berupa interger dan merepresentasikan apakah ketiga sisi tersebut membentuk segitiga sama kaki, segitiga sama sisi, segitiga sembarang, atau terdapat nilai yang bukan sisi segitiga.
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