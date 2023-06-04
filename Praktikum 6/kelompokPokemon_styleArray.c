/*Nama File 	: kelompokpower_styleArray.c*/
/*Deskripsi 	: Mengelompokkan power berdasarkan kelompok power huruf terentu dan dioutputkan dalam file yang berbeda*/
/*Pembuat   	: 24060121120021-Resma Adi Nugroho*/
/*Tgl Pembuatan	: 21 Mei 2022 12.52 WIB*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_POKEMON 500

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    int i, capacity;
    int power[MAX_POKEMON]; // array power dan id
    char nama[MAX_POKEMON][255]; // array nama
    char (*name)[255]; // array pointer nama
    int retval;
    FILE *myFILE, *aFile, *bFile, *cFile, *dFile;

    i = 0;
    myFILE = fopen("pokemon.txt", "r");
    aFile = fopen("Kelas_S.txt","w");
    bFile = fopen("Kelas_A.txt","w");
    cFile = fopen("Kelas_B.txt","w");
    dFile = fopen("Kelas_C.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // Pesan muncul apabila file tidak ditemukan
    } else {
        retval = fscanf(myFILE, "%s %d", nama[0], &power[0]);
        while (retval != EOF && i < MAX_POKEMON)
        {
            i++;
            retval = fscanf(myFILE, "%s %d", nama[i], &power[i]);
        }
        capacity = i;
        name = malloc(capacity * sizeof(*name)); // alokasi name
        if (name == NULL) {
            printf("Gagal mengalokasikan memori!");
            return 1;
        }
        for(int s = 0; s < capacity; s++){ // copy list nama dari array nama ke pointer array name
            strcpy(name[s], nama[s]);
        }
        fprintf(aFile, "Daftar Pokemon Yang Memiliki Power Kelas S\n");
        fprintf(bFile, "Daftar Pokemon Yang Memiliki Power Kelas A\n");
        fprintf(cFile, "Daftar Pokemon Yang Memiliki Power Kelas B\n");
        fprintf(dFile, "Daftar Pokemon Yang Memiliki Power Kelas C\n");
        for(int a = 0; a < capacity; a++){ // proses input data ke masing-masing file kelompok power
            if(power[a] >= 800){
                fprintf(aFile, "%s %d\n", name[a], power[a]);
            } else if(power[a] >= 600 && power[a] < 800){
                fprintf(bFile, "%s %d\n", name[a], power[a]);
            } else if(power[a] >= 400 && power[a] < 600){
                fprintf(cFile, "%s %d\n", name[a], power[a]);
            } else {
                fprintf(dFile, "%s %d\n", name[a], power[a]);
            }
        }

        printf("power berhasil dikelompokkan");

        free(name); // membersihkan data pointer name
    }
    fclose(myFILE);
    fclose(aFile);
    fclose(bFile);
    fclose(cFile);
    fclose(dFile);
    return 0;
}
