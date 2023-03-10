/*
Nama Program  : faktorbil.c
Deskripsi     : Mencari dan menampilkan faktor - faktor dari sebuah bilangan interger.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 3 Maret 2023 20:44 WIB
*/

#include <stdio.h>

int main(){
    int i;
    int num;

    printf("Masukkan bilangan berupa interger: \n");
    scanf("%d", &num);
    printf("Faktorial dari %d adalah: \n", num);
    for(i=1 ; i <= num; i++){
        if(num % i == 0){
            printf("%d\n",i);
        }
    }


    return 0;
}