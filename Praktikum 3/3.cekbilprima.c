/*
Nama Program  : cekbilprima.c
Deskripsi     : Mencari dan menampilkan apakah bilangan interger tersebut prima serta menampilkan faktor - faktornya.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 3 Maret 2023 22:03 WIB
*/

#include <stdio.h>

int main(){

    int bil;
    int i;
    int faktor=0;

    printf("Masukkan bilangan interger: ");
    scanf("%d", &bil);

    for (i = 1; i <= bil; i++){
        if (bil % i ==0){
            faktor++;
        }
    }

    if (faktor == 2){
        printf("%d adalah bilangan prima, {faktor bilangannya adalah 1 dan %d}", bil, bil);
    } else{
        printf("%d bukan bilangan prima, {faktor bilangannya adalah ", bil);
        for (i = 1; i<= bil ; i++){
            if (bil % i == 0){
                printf("%d",i);
                if ( i != bil){
                    printf(", ");
            }
        
        }
    } 
    printf("}");
    }
    return 0;
}