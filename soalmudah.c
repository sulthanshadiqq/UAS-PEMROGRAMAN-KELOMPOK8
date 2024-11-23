#include <stdio.h>
void soal_mudah(){
    int total_score = 0;
    char jawaban;

    printf ("\n*easy level*\n");
    printf ("---Selamat bermain!!---\n");

    //soal 1
    printf ("\n=====Soal 1=====\n");
    printf ("Di provinsi manakah pulau komodo terletak?\n");
    printf ("A. NTB\n");
    printf ("B. Jawa Barat\n");
    printf ("C. NTT\n");
    printf ("D. Bali\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar(); // membaca atau membuang karakter yang tidak dibutuhkan
    if (jawaban == 'C'){
        print ("Yeyy!,jawaban anda benar!\n");
        total_score += 100;
    } 
    else {
        printf ("jawaban anda salah\n");
    }

    //soal 2
    printf ("\n=====Soal 2=====\n");
    printf ("Apa julukan terkenal dari negara Korea Selatan?\n");
    printf ("A. Negeri Tirai Bambu\n");
    printf ("B. Negeri Kincir Angin\n");
    printf ("C. Zamrud Khatulistiwa\n");
    printf ("D. Negeri Gingseng\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar();
    if (jawaban == 'D'){
        printf ("Horee!!, jawaban anda benar!\n");
        total_score += 100;
    }
    else {
        printf ("jawaban anda salah");
    }

    //soal 3
    printf ("\n=====Soal 3=====\n");
    printf ("Negara manakah yang dijuluki Negara Gajah Putih?\n");
    printf ("A. Vietnam\n");
    printf ("B. Thailand\n");
    printf ("C. Brunei Darussalam\n");
    printf ("D. Myanmar\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar();
    if (jawaban == 'B'){
        printf ("Mantap!, jawaban anda benar!\n");
        total_score += 100;
    }
    else {
        printf ("jawaban anda salah\n");
    }

    //soal 4
    printf ("\n=====Soal 4=====\n");
    printf ("Benua manakah yang dijuluki Benua biru?\n");
    printf ("A. Eropa\n");
    printf ("B. Antartika\n");
    printf ("C. Australia\n");
    printf ("D. Amerika\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar();
    if (jawaban == 'A'){
        printf ("Keren!!, jawaban anda benar!\n");
        total_score += 100;
    }
    else {
        printf ("jawaban anda salah\n");
    }

    //soal 5
    printf ("\n=====Soal 5=====\n");
    printf ("\nApa nama bunga nasional Indonesia\n");
    printf ("A. Raflesia Arnoldi\n");
    printf ("B. Kenanga\n");
    printf ("C. Tulip\n");
    printf ("D. Melati\n");
    printf ("Pilih jawaban (A/B/C/D) : ");
    scanf ("%c", &jawaban);
    getchar();
    if (jawaban == 'D') {
        printf ("Hebat!, jawaban anda benar!\n");
        total_score += 100;
    }
    else {
        printf ("jwaban anda salah\n");
    }

    //menampilkan hasil akhir
    printf ("Kuis telah selesai\n");
    printf ("Point akhir anda : %d point.\n", total_score);
    printf ("\nTerima Kasih sudah bermain!!\n");
}
