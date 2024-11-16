#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

char login[20];

typedef struct peserta{
    char username[50];
    int password [50];


}file;
file reg;

typedef struct leaderboard{
    char uname;
    int score;
}leader;
leader papan;

void regis () {
    FILE *fpw, *fpw1 = fopen("database/login.bin", "wb");
    fpw=fopen("b.txt", "ab");
    fpw1=fopen("p.txt", "a");
    printf("Masukkan username :-\t");
    scanf("%s",reg.username );  
    strcpy(papan.uname, reg.username);
    fprintf(fpw1,"%s", papan.uname);
    printf("Masuukan password:-\t");
    fflush(stdin);
    scanf("%s", reg.password);
    fwrite(&regis,sizeof(regis),1,fpw);
    fclose(fpw);
    fclose(fpw1);
}
