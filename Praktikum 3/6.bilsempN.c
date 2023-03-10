/*
Nama Program  : bilsempN.c
Deskripsi     : Mencetak bilangan sempurna sampai dengan bilangan interger ke - N.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 5 Maret 2023 12:48 WIB
*/

#include <stdio.h>

int main() {
    int n; 
    int i;
    int j;
    int faktor; 
    int sum;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Bilangan sempurna hingga %d: ", n);
        for (i = 1; i <= n; i++) {
            faktor = 0;
            sum = 0;
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    faktor++;
                    sum += j;
                }
            }
            if (sum == i) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
