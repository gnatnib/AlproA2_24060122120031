/*
Nama Program  : sequential.c
Deskripsi     : Mencari data yang sesuai dalam tabel menggunakan metode sequential searching.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 10 Mei 2023 21:16
*/

#include <stdio.h>
#include <stdalign.h>
#include <stdbool.h>

int main(){

    //Kamus Lokal
    int tabel[10] = {3,5,100,21,44,18,99,2000,201,86};
    int i;
    char flag;
    int counter;
    int iX;

    //Algoritma
    flag = false;
    counter = 0;
    iX = 44;

    for (int i = 0 ; i < 10 ; i++){
        if (tabel[i] == iX){
            flag = true;
            break;
        }
        counter++;
    }
    if (flag==true){
        printf("Data %d ditemukan pada indeks ke-%d.\n", iX, counter);
    }
    else{
        printf("Data %d tidak ditemukan.\n", iX);
    }

}