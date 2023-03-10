/*
Nama Program  : cekbilsemp.c
Deskripsi     : Mencari dan menampilkan apakah bilangan interger tersebut merupakan bilangan sempurna.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 4 Maret 2023 20:23 WIB
*/

#include <stdio.h>

int main(){

    int i;
    int num;
    int faktor = 0;

    printf("Masukkan bilangan interger: ");
    scanf("%d", &num);

    for (i = 1; i <= num*0.5; i++){
        if (num % i == 0){
            faktor += i;
        }
    }

    if (faktor == num){
        printf("%d adalah bilangan sempurna", num);
    } else {
        printf("%d bukan bilangan sempurna", num);
    }
    return 0;

}