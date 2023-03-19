/*
Nama Program  : FrekNilTabel.c
Deskripsi     : Menampilkan nilai elemen dari tabel yang frekuensi kemunculannya lebih dari 1.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 15 Maret 2023 00:18
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int i, j, ukuran, sama, *array_int;

    //Algoritma
    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    array_int = (int*)malloc(ukuran * sizeof(int));

    for (i = 0; i<ukuran; i++){
        printf("Masukkan nilai indeks: ", i);
        scanf("%d", &array_int[i]);
    }

    for (i = 0; i<ukuran; i++){
        sama = 0;
        for (j = 0; j < ukuran; j++){
            if (i == j){
                break;
            }
            else{
                if (array_int[i] == array_int[j]){
                sama += 1;
                }
            }
        }
        if (sama == 1){
            printf("Indeks yang muncul lebih dari satu kali yaitu: %d\n", array_int[i]);
        }
    }
    return 0;
}
