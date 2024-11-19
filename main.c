#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <direct.h> 
#include <io.h> 
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h> 
#

typedef struct peserta {
    char username[50];
    char password[50]; 
} pengguna;
pengguna user;



void cekdanmembuatFolder(const char *namaFolder) {
    // Mengecek apakah direktori sudah ada
    
    if (_access(namaFolder, 0) == 0) {
        printf(" folder '%s' sudah ada.\n", namaFolder);
    } else {
        // Jika direktori tidak ada, buat direktori baru
        if (_mkdir(namaFolder) == 0) {
            printf("folder '%s' berhasil dibuat.\n", namaFolder);
        } else {
            perror("Gagal membuat folder");
        }
    }
}

void registrasiuser(){
    FILE *registrasi;

    registrasi=fopen("database/login.bin", "wb");
    if (registrasi == NULL) {
        printf("Gagal membuat file.\n");
        exit(1);}

    printf("--------registrasi--------");
    printf("masukkan username");
    scanf("%s",user.username);
    printf("masukkan password");
    scanf("%s", user.password);

    fwrite(&user, sizeof(pengguna), 1, registrasi);
    fclose(registrasi);

    printf("BERHASIL!, SILAHKAN LOGIN.\n");
}


int loginuser(char *username, char *password){
    FILE *login;

    login=fopen("database/login.bin", "rb");
    if (login == NULL) {
        printf("Username dan password tidak valid! Silakan registrasi terlebih dahulu.\n");
        exit(1);}

        fread(&user, sizeof(pengguna),1,login);
        fclose(login);

        if (strcmp(user.username,username)== 0 && strcmp(user.password, password) == 0) {
        return 1; // login berhasil
    }
    return 0; //login gagal
}
