/*
Nama Program  : volBolaKerct.c
Deskripsi     : Menghitung dan menampilkan volume bola dan kerucut. Rumus volume bola = Vb= 4/3 * (Phi * r*r*r), rumus volume kerucut = Vk = (Vb/2)
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : Kamis, 23 Februari 2023 21:10 WIB
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //kamus
    float r, Vb, Vk;
    const float PHI = 3.1415;
    
    //algoritma
    printf("program volume bola kerucut \n");
    printf("masukkan nilai r:");
    scanf("%f", &r);

    Vb = (4/3) * (PHI *r *r * r);
    printf("volume bola adalah : %.2f\n", Vb);
    
    Vk = (Vb/2);
    printf("volume kerucut adalah : %.2f", Vk);
return 0;
}