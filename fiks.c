#include <stdio.h>

void soal_sulit() {
    int total_skor = 0;
    char jawaban;

    
    printf("\n=====SOAL 1=======\n");
    printf("Pergerakan nasional Indonesia pada awal abad ke-20 sangat dipengaruhi oleh berbagai faktor, baik internal maupun eksternal. Faktor eksternal yang paling dominan dalam memicu semangat nasionalisme di Indonesia adalah...\n");
    printf("A. Revolusi Perancis\n");
    printf("B. Perang Dunia I\n");
    printf("C. Revolusi Industri\n");
    printf("D. Perang Dingin\n");
    printf("Pilih jawaban (A/B/C/D): ");
    scanf(" %c", &jawaban);

    if (jawaban == 'B') {
        printf("Jawaban benar!\n");
        total_skor += 20;
    } else {
        printf("Jawaban salah.\n");
    }

    
    printf("=====SOAL 2=======\n");
    printf("\nKonsep adat istiadat dalam masyarakat Indonesia memiliki sifat yang dinamis. Hal ini berarti...\n");
    printf("A. Adat istiadat bersifat statis dan tidak berubah seiring waktu\n");
    printf("B. Adat istiadat selalu mengikuti perkembangan zaman dan teknologi\n");
    printf("C. Adat istiadat dapat beradaptasi dengan perubahan sosial dan budaya, namun tetap mempertahankan nilai-nilai dasarnya\n");
    printf("D. Adat istiadat hanya berlaku untuk masyarakat tradisional dan tidak relevan dengan masyarakat modern.\n");
    printf("Pilih jawaban (A/B/C/D): ");
    scanf(" %c", &jawaban);

    if (jawaban == 'C') {
        printf("Jawaban benar!\n");
        total_skor += 20;
    } else {
        printf("Jawaban salah.\n");
    }

    
    printf("\n=====SOAL 3=======\n");
    printf("\nFenomena unik yang terjadi di Indonesia dan menjadi daya tarik bagi para peneliti adalah keberadaan garis Wallace dan Weber. Garis-garis ini membagi wilayah Indonesia menjadi beberapa zona biogeografi yang berbeda. Faktor utama yang menyebabkan perbedaan tersebut adalah...\n");
    printf("A. Iklim tropis\n");
    printf("B. Aktivitas vulkanik\n");
    printf("C. Sejarah geologis kepulauan\n");
    printf("D. Arus laut\n");
    printf("Pilih jawaban (A/B/C/D): ");
    scanf(" %c", &jawaban);

    if (jawaban == 'C') {
        printf("Jawaban benar!\n");
        total_skor += 20;
    } else {
        printf("Jawaban salah.\n");
    }

    printf("\n=====SOAL 4=======\n");
    printf("\nSalah satu faktor utama yang menyebabkan keragaman budaya di Indonesia adalah...\n");
    printf("A. Letak geografis yang berupa kepulauan\n");
    printf("B. Pengaruh agama yang beragam\n");
    printf("C. Adanya interaksi dengan berbagai bangsa asing\n");
    printf("D. Semua jawaban benar\n");
    printf("Pilih jawaban (A/B/C/D): ");
    scanf(" %c", &jawaban);

    if (jawaban == 'A') {
        printf("Jawaban benar!\n");
        total_skor += 20;
    } else {
        printf("Jawaban salah.\n");
    }

  
    printf("\n=====SOAL 5=======\n");
    printf("\nManakah dari pernyataan berikut yang paling tepat menggambarkan hubungan antara kesenjangan sosial dan perubahan iklim...\n");
    printf("A. Kesenjangan sosial memperparah dampak perubahan iklim, terutama pada kelompok miskin, namun tidak terpengaruh olehnya\n");
    printf("B. Perubahan iklim memperbesar kesenjangan sosial, terutama di negara berkembang, namun tidak menyebabkan kesenjangan sosial\n");
    printf("C. Kesenjangan sosial dan perubahan iklim saling memperkuat, menciptakan lingkaran setan yang sulit diputus\n");
    printf("D. Kesenjangan sosial tidak terkait dengan perubahan iklim, keduanya merupakan masalah yang terpisah\n");
    printf("Pilih jawaban (A/B/C/D): ");
    scanf(" %c", &jawaban);

    if (jawaban == 'C') {
        printf("Jawaban benar!\n");
        total_skor += 100;
    } else {
        printf("Jawaban salah.\n");
    }

    printf("\nPoin akhir Anda: %d poin.\n", total_skor);
}

int main() {
    soal_sulit();
    return 0;
}
