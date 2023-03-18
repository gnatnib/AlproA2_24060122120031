/*
Nama Program  : SimetriTabel.c
Deskripsi     : Menentukan apakah ukuran dan indeks dari tabel T1 dan tabel T2 sama atau tidak, jika sama maka simetri, jika tidak maka tidak simetri.
Nama Pembuat  : Bintang Syafrian Rizal
NIM           : 24060122120031
Tanggal       : 18 Maret 2023 22:36
*/

#include <stdio.h>

int main(){
    
    int T1[100];
    int T2[100];
    int i;
    int n1;
    int n2;
    int simetri = 1;
    
    
    printf("Masukkan ukuran dari tabel T1: ");
    scanf("%d", &n1);
    
    printf("Masukkan indeks dari tabel T1: ");
    for (i =0 ; i < n1 ; i++){
        scanf("%d", &T1[i]);
    }
    
    printf("Masukkan ukuran dari tabel T2: ");
    scanf("%d", &n2);
    
    if (n1 != n2){
        simetri = 0;
    } else {
        printf("Masukkan indeks dari tabel T2: ");
        for (i = 0; i < n2 ; i++){
        scanf("%d", &T2[i]);
        
        if (T1[i] != T2[i]){
            simetri = 0;
            }
        }
    }
    
    if (simetri){
        printf("Tabel T1 dan T2 Simetri");
        
    
    }else {
        printf("Tabel T1 dan T2 Tidak Simetri");
    }
    return 0;
}
