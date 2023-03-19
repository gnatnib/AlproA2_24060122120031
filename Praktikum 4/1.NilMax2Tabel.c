/*
Nama Program  : NilMax2Tabel.c
Deskripsi     : Menampilkan nilai maksimum kedua dari sebuah tabel.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 14 Maret 2023 21:16
*/

#include <stdio.h>

int main(){

    //Kamus
    int tabel[100];
    int i;
    int n;
    int tot1 = 0;
    int tot2 = 0;

    //Algoritma
    printf("Masukkan panjang array: ");
    scanf("%d", &n);

    for (i = 0 ; i<n ; i++){
        printf("Masukkan indeks ke - %d: ", i);
        scanf ("%d", &tabel[i]);
    }

    for (i = 0 ; i<n ; i++){
        if (tabel[i] > tot1){
            tot2 = tot1;
            tot1 = tabel[i];
        } else if (tabel[i] > tot2 && tabel[i] < tot1){
            tot2 = tabel[i];
        } 
    }

    printf("%d", tot2);



    return 0;
}