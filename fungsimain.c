// Fungsi utama
int main() {
    int pilihan;
    char username[50], password[50]; // Variabel untuk username dan password

    do {
        menuLogin();
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);
        getchar(); // Menghapus karakter newline dari buffer

        switch (pilihan) {
            case 1:
                registrasiuser();
                break;
            case 2:

             // Minta input username dan password dari pengguna
                printf("Masukkan username: ");
                scanf("%s", username);
                printf("Masukkan password: ");
                scanf("%s", password);

                if (loginuser(username,password)){
                    printf("\nLogin berhasil! Mulai bermain kuis...\n");
                    getchar(); // Menunggu input sebelum mulai kuis
                    tampilkanPeraturan();
                    soal_mudah();
                } else {
                    printf("Login gagal, coba lagi!\n");
                }
                break;
            case 3:
                printf("Program selesai, terima kasih!\n");
                break;
            default:
                printf("Pilihan salah, coba lagi!\n");
        }
    } while (pilihan != 3);

    return 0;
}
