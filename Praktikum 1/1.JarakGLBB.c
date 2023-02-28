/*
Nama Program  : jarakPBola.c
Deskripsi     : Menghitung dan menampilkan jarak yang ditemput oleh suatu benda ketika mengalami gerak parabola dengan rumus y = v0 * t - ½ * (g * t2)
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : Selasa, 21 Februari 2023 20:44 WIB
*/
#include <stdio.h>

int main()
{
    //Kamus Lokal
    float vnol, t, a, s;
    
    //Algoritma
    printf("Masukkan kecepatan awal(v0): \n");
    scanf("%f",&vnol);
    printf("Masukkan waktu (t): \n");
    scanf("%f",&t);
    printf("Masukkan percepatan(a): \n");
    scanf("%f",&a);
    
    s = vnol*t+0.5*(a*t*t);
    printf("Jaraknya yaitu: %f\n",s);
    return 0;
} 