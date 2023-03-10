/*
Nama Program  : bilprimaN.c
Deskripsi     : Mencetak bilangan prima sampai dengan bilangan interger ke - N.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 4 Maret 2023 20:47 WIB
*/

#include <stdio.h>

int main(){

    //Kamus Lokal
    int n;
    int i;
    int faktor;
    int j;

    //Algoritma
    printf("Masukkan bilangan interger: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Bilangan primanya adalah ");
        for (i = 1; i <= n; i++){
            faktor = 0;
            for (j = 1 ; j <= i ; j++){
                if ( i % j == 0 ){
                    faktor ++;
                } 
            }   
            if (faktor == 2){
                printf("%d ", i);
            }
        }
    }
    
    return 0;
}
