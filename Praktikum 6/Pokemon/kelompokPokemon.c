#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char namapokemon[255];
    int nilai;
} pokemon;

int main(void) {
    pokemon POK;
    int retval;

    FILE *myFILE, *aFile, *bFile, *cFile, *dFile;

    myFILE = fopen("pokemon.txt", "r");
    aFile = fopen("Kelas_S.txt", "w");
    bFile = fopen("Kelas_A.txt", "w");
    cFile = fopen("Kelas_B.txt", "w");
    dFile = fopen("Kelas_C.txt", "w");

    if (!myFILE) {
        printf("File tidak ditemukan!\n");
    } else {
        fprintf(aFile, "Daftar Pokemon Yang Memiliki Power Kelas S\n");
        fprintf(bFile, "Daftar Pokemon Yang Memiliki Power Kelas A\n");
        fprintf(cFile, "Daftar Pokemon Yang Memiliki Power Kelas B\n");
        fprintf(dFile, "Daftar Pokemon Yang Memiliki Power Kelas C\n");
        
        retval = fscanf(myFILE, "%s %d", POK.namapokemon, &POK.nilai);
        while (retval != EOF) {
            if (POK.nilai >= 800) {
                fprintf(aFile, "%s %d\n", POK.namapokemon, POK.nilai);
            } else if (POK.nilai >= 600 && POK.nilai < 800) {
                fprintf(bFile, "%s %d\n", POK.namapokemon, POK.nilai);
            } else if (POK.nilai >= 400 && POK.nilai < 600) {
                fprintf(cFile, "%s %d\n", POK.namapokemon, POK.nilai);
            } else {
                fprintf(dFile, "%s %d\n", POK.namapokemon, POK.nilai);
            }
            retval = fscanf(myFILE, "%s %d", POK.namapokemon, &POK.nilai);
        }

        printf("Pokemon berhasil dikelompokkan\n");
        fclose(myFILE);
        fclose(aFile);
        fclose(bFile);
        fclose(cFile);
        fclose(dFile);
    }

    return 0;
}
