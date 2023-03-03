/*
Nama Program  : tahanan.c
Deskripsi     : Menampilkan jenis bilangan apakah bilangan tersebut merupakan bilangan bulat positif, negatif atau nol, jika bukan bilangan maka program akan menampilkan "Bukan termasuk bilangan"
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 28 Februari 2023 22:45 WIB
*/

#include <stdio.h>

int main(void) {
   int tahanan1;
   int tahanan2;
   int tahanan3;
   int total;

   printf("Masukkan nilai tahanan 1: ");
   scanf("%d", &tahanan1);

   printf("Masukkan nilai tahanan 2: ");
   scanf("%d", &tahanan2);

   printf("Masukkan nilai tahanan 3: ");
   scanf("%d", &tahanan3);

   if (tahanan1 <= 0 || tahanan2 <= 0 || tahanan3 <= 0) {
      printf("Masukan tahanan tidak boleh negatif.");
      return 0;
   }

   total = tahanan1 + tahanan2 + tahanan3;

   printf("Total tahanan seri adalah: %d", total);

   return 0;
}
