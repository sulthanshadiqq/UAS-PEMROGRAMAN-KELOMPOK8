#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

int total_skor = 0;

void tampilkan_soal_void(int nomor_soal, const char *pertanyaan, const char *pilihan, char jawaban_benar, int batas_waktu) {
    char jawaban = '\0';
    int waktu_tersisa = batas_waktu;

    printf("\n===== SOAL %d =====\n", nomor_soal);
    printf("%s\n", pertanyaan);
    printf("%s\n", pilihan);

    while (waktu_tersisa > 0) {
        printf("\rWaktu tersisa: %d detik. Pilih jawaban (A/B/C/D): ", waktu_tersisa);
        fflush(stdout);

        Sleep(1000); 
        waktu_tersisa--;

        
        if (_kbhit()) {
            jawaban = getch(); 
            printf("%c\n", jawaban); 
            break;
        }
    }

    printf("\n");
    if (waktu_tersisa <= 0 && jawaban == '\0') {
        printf("Waktu habis! Anda melewati batas %d detik.\n", batas_waktu);
    } else if (jawaban == jawaban_benar) {
        printf("Jawaban benar!\n");
        total_skor += 20; 
    } else {
        printf("Jawaban salah. Jawaban yang benar adalah %c.\n", jawaban_benar);
    }
}


void soal_sulit() {
    int batas_waktu = 20;
    char lanjut;

    printf("===== KUIS PILIHAN GANDA =====\n");
    printf("Jawab pertanyaan berikut dengan memilih A, B, C, atau D.\n");
    printf("Anda memiliki waktu %d detik untuk setiap soal.\n", batas_waktu);

    tampilkan_soal_void(
        1,
        "Pergerakan nasional Indonesia pada awal abad ke-20 sangat dipengaruhi oleh berbagai faktor, baik internal maupun eksternal. Faktor eksternal yang paling dominan dalam memicu semangat nasionalisme di Indonesia adalah...",
        "A. Revolusi Perancis\nB. Perang Dunia I\nC. Revolusi Industri\nD. Perang Dingin",
        'B', batas_waktu
    );

    printf("Tekan Enter untuk melanjutkan ke soal berikutnya...\n");
    while ((lanjut = getch()) != '\r'); 

    tampilkan_soal_void(
        2,
        "Konsep adat istiadat dalam masyarakat Indonesia memiliki sifat yang dinamis. Hal ini berarti...",
        "A. Adat istiadat bersifat statis dan tidak berubah seiring waktu\nB. Adat istiadat selalu mengikuti perkembangan zaman dan teknologi\nC. Adat istiadat dapat beradaptasi dengan perubahan sosial dan budaya, namun tetap mempertahankan nilai-nilai dasarnya\nD. Adat istiadat hanya berlaku untuk masyarakat tradisional dan tidak relevan dengan masyarakat modern.",
        'C', batas_waktu
    );

    printf("Tekan Enter untuk melanjutkan ke soal berikutnya...\n");
    while ((lanjut = getch()) != '\r'); 

    tampilkan_soal_void(
        3,
        "Fenomena unik yang terjadi di Indonesia dan menjadi daya tarik bagi para peneliti adalah keberadaan garis Wallace dan Weber. Garis-garis ini membagi wilayah Indonesia menjadi beberapa zona biogeografi yang berbeda. Faktor utama yang menyebabkan perbedaan tersebut adalah...",
        "A. Iklim tropis\nB. Aktivitas vulkanik\nC. Sejarah geologis kepulauan\nD. Arus laut",
        'C', batas_waktu
    );

    printf("Tekan Enter untuk melanjutkan ke soal berikutnya...\n");
    while ((lanjut = getch()) != '\r'); 

    tampilkan_soal_void(
        4,
        "Salah satu faktor utama yang menyebabkan keragaman budaya di Indonesia adalah...",
        "A. Letak geografis yang berupa kepulauan\nB. Pengaruh agama yang beragam\nC. Adanya interaksi dengan berbagai bangsa asing\nD. Semua jawaban benar",
        'A', batas_waktu
    );

    printf("Tekan Enter untuk melanjutkan ke soal berikutnya...\n");
    while ((lanjut = getch()) != '\r'); 

    tampilkan_soal_void(
        5,
        "Manakah dari pernyataan berikut yang paling tepat menggambarkan hubungan antara kesenjangan sosial dan perubahan iklim...",
        "A. Kesenjangan sosial memperparah dampak perubahan iklim, terutama pada kelompok miskin, namun tidak terpengaruh olehnya\nB. Perubahan iklim memperbesar kesenjangan sosial, terutama di negara berkembang, namun tidak menyebabkan kesenjangan sosial\nC. Kesenjangan sosial dan perubahan iklim saling memperkuat, menciptakan lingkaran setan yang sulit diputus\nD. Kesenjangan sosial tidak terkait dengan perubahan iklim, keduanya merupakan masalah yang terpisah",
        'C', batas_waktu
    );

    printf("\nPoin akhir Anda: %d poin.\n", total_skor);
    if (total_skor >= 90) {
        printf("\nWAH NILAI ANDA SANGAT MEMUASKAN!\n");
    } else if (total_skor >= 70) {
        printf("\nNILAI ANDA BAGUS!\n");
    } else {
        printf("\nWADUH NILAI ANDA MASIH KURANG, TINGKATKAN LAGI!\n");
    }
    printf("ANDA SUDAH MENYELESAIKAN KUIS INI\n");
    printf("=== TERIMA KASIH ===\n");
}


void main_kuis() {
    soal_sulit();
}

int main() {
    main_kuis();
    return 0;
}
