#include <stdio.h>

int main() {
    int skor = 823;
    int skorMaks = 1000;
    
    printf("materi ini menjelaskan tentang konversi tipe variabel secara eksplisit \n");
    printf("Contoh: Berapa be   sar persentase antar skor dengan maksimum? \n");

    printf("Maka kode yang ditulis akan berupa 'float persentase = (skor/skorMaks) * 1000' ya kan? \n");
    printf("tapi sayangnya, hasilnya akan dalam bentuk integer/bulat dan diambil satu angka saja. misal 5/2, yang diambil itu hasilnya adalah 2 karena operator awalnya masih integer. bukan 2.5 \n\n");

    printf("oleh karena itu, perlu lakukan konversi secara eksplisit dengan kode ini: (baca coding) \n");
    
    float persentase = (float) skor/skorMaks *100;

    printf("hasil akhir dengan koma setelah konversi: \n");
    printf("%.1f", persentase);
        

    return 0;
}