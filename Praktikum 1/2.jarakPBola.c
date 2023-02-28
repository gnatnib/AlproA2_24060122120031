/*
Nama Program  : jarakPBola.c
Deskripsi     : Menghitung dan menampilkan jarak yang ditempuh oleh suatu benda ketika mengalami gerak parabola dengan rumus y = v0 * t - ½ * (g * t2)
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : Selasa, 21 Februari 2023 21:25 WIB
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Kamus Lokal
    float v0, t, y;
    const float g = 9.8;

    //Algoritma
    printf("masukkan nilai v0 = ");
    scanf("%f", &v0);

    printf("masukkan nilai t = ");
    scanf("%f", &t);

    y = v0 * t - (g*t*t)/2;

    printf("Jarak yang ditempuh benda yaitu :  %.2f", y);

    return 0;
}
