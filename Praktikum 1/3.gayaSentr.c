/*
Nama Program  : gayaSentr.c
Deskripsi     : Menghitung dan menampilkan gaya sentripetal yang dialami oleh benda dengan rumus F = m *(v*v/r)
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : Kamis, 23 Februari 2023 20:49 WIB
*/
#include<stdio.h>

#include<stdio.h>

int main()
{
    //Kamus Lokal
    float m,v,r,F;

    //Algoritma
    printf("Program Gaya Sentripetal \n");
    printf("masukkan nilai m: ");
    scanf("%f", &m);
    printf("masukkan nilai v:");
    scanf("%f", &v);
    printf("masukkan nilai r: ");
    scanf("%f", &r);

    F = m *(v*v/r);
    printf("maka gaya sentripetal adalah :  %.2f", F);
return 0;
}