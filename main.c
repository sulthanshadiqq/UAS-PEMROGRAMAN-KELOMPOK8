#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <direct.h> 
#include <io.h> 
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

typedef struct peserta {
    char username[50];
    char password[50]; 
} pengguna;

void cekdanmembuatFolder(const char *namaFolder) {
    // Mengecek apakah direktori sudah ada
    if (_access(namaFolder, 0) == 0) {
        printf("Folder '%s' sudah ada.\n", namaFolder);
    } else {
        // Jika direktori tidak ada, buat direktori baru
        if (_mkdir(namaFolder) == 0) {
            printf("Folder '%s' berhasil dibuat.\n", namaFolder);
        } else {
            perror("Gagal membuat folder");
        }
    }
}

void registrasiuser() {
    FILE *registrasi;
    pengguna user;

    // Cek apakah folder database sudah ada, jika belum buat
    cekdanmembuatFolder("database");

    registrasi = fopen("database/login.bin", "ab");  // Gunakan "ab" untuk append, bukan "wb"
    if (registrasi == NULL) {
        printf("Gagal membuka file database.\n");
        exit(1);
    }

    printf("-------- Registrasi --------\n");
    printf("Masukkan username: ");
    scanf("%s", user.username);
    printf("Masukkan password: ");
    scanf("%s", user.password);

    fwrite(&user, sizeof(pengguna), 1, registrasi);
    fclose(registrasi);

    printf("Registrasi berhasil! Silakan login.\n");
}

int loginuser(char *username, char *password) {
    FILE *login;
    pengguna user;

    login = fopen("database/login.bin", "rb");
    if (login == NULL) {
        printf("Database tidak ditemukan, silakan registrasi terlebih dahulu.\n");
        exit(1);
    }

    while (fread(&user, sizeof(pengguna), 1, login)) {
        if (strcmp(user.username, username) == 0 && strcmp(user.password, password) == 0) {
            fclose(login);
            return 1;  // login berhasil
        }
    }

    fclose(login);
    return 0;  // login gagal
}

void soal_mudah(){
    int total_score = 0;
    char jawaban;

    //soal 1
    printf ("\nDi provinsi manakah pulau komodo terletak?\n");
    printf ("A. NTB\n");
    printf ("B. Jawa Barat\n");
    printf ("C. NTT\n");
    printf ("D. Bali\n");
    printf (Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar(); // membaca atau membuang karakter yang tidak dibutuhkan
    if (jawaban == 'C'){
        print ("jawaban anda benar!\n");
        total_score += 100;
    } 
    else {
        printf ("jawaban anda salah\n");

    //soal 2
    printf ("\nApa julukan terkenal dari negara Korea Selatan?\n");
    printf ("A. Negeri Tirai Bambu\n");
    printf ("B. Negeri Kincir Angin\n");
    printf ("C. Zamrud Khatulistiwa\n");
    printf ("D. Negeri Gingseng\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar();
    if (jawaban == 'D'){
        printf ("jawaban anda benar!\n");
        total_score += 100;
    }
    else {
        printf ("jawaban anda salah");

    //soal 3
    printf ("\nNegara manakah yang dijuluki Negara Gajah Putih?\n");
    printf ("A. Vietnam\n");
    printf ("B. Thailand\n");
    printf ("C. Brunei Darussalam\n");
    printf ("D. Myanmar\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar();
    if (jawaban == 'B'){
        printf ("jawaban anda benar!\n");
        total_score += 100;
    }
    else {
        printf ("jawaban anda salah\n");

        
