/*
Nama Program  : JumFrekNilTabel.c
Deskripsi     : Menampilkan jumlah nilai - nilai dari tabel T yang frekuensi kemunculannya lebih dari 1.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 15 Maret 2023 17:03
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int i, j, ukuran, sama, nomor, jumlah = 0, *array_int;

    //Algoritma
    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    array_int = (int*)malloc(ukuran * sizeof(int));

    for (i = 0; i<ukuran; i++){
        printf("Masukkan indeks ke %d:", i);
        scanf("%d", &array_int[i]);
    }
    for (i = 0; i<ukuran; i++){
        sama = 0;
        for (j = 0 ; j < ukuran; j++){
            if (array_int[i] == array_int[j]){
                sama++;
            }
        }
        if (sama > 1){
            jumlah+=array_int[i];
        }
    }
    printf("Jumlah totalnya yaitu : %d", jumlah);
    return 0;
}
