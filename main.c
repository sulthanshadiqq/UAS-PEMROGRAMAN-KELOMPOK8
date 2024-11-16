#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char login[20];
typedef struct{
    char username[50];
    int password [50];

}file;
file reg;


void regis () {
    FILE *fpw = fopen("database/login.bin", "wb");
    fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fpw);
    fclose(fpw);
}

void teslogin(){
    FILE *fpr;

    if ((fpr = fopen("database/login.bin", "rb"))== NULL){
        printf("gagal membuka file !");
        return EXIT_FAILURE;
    }
}
     
