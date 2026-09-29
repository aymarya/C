#include <stdio.h>

int main() {
    int x = 8;
    int y = 5;

    printf("besaran angka X adalah: %d \n", x);
    printf("besaran angka y adalah: %d \n \n", y);

    //penjumlahan
    //x+y
    int jumlah = x+y;
    printf("x+y = %d \n", jumlah);

    //pengurangan
    //x-y
    int kurang = x-y;
    printf("x-y = %d \n", kurang);

    //perkalian
    //x*y
    int kali = x*y;
    printf("x*y = %d \n", kali);

    //pembagian
    // (x/y)
    float bagi = (float) x/y;
    printf("x/y = %.2f \n", bagi);

    //modulus (sisa pembagian)
    //x&y
    float sisabagi = 7&5;
    printf("pakai angka 7 dan 5, maka x&y = %.2f \n", sisabagi);

    //increment (bertambah 1)
    //++x atau ++y
    int incX = ++x;
    int incY = ++y;

    printf("hasil increment dari X adalah : %d \n", incX);
    printf("hasil increment dari y adalah : %d \n", incY);

    //decrement (berkurang 1)
    //--x atu --y
    int decX = --x;
    int decY = --y;

    printf("hasil decrement dari X adalah : %d \n", decX);
    printf("hasil decrement dari y adalah : %d \n\n", decY);


    //contoh untuk nyata (for real)
    printf("3 orang masuk pintu \n");
    int masukpintu = 0;

    masukpintu++;
    masukpintu++;
    masukpintu++;

    printf("total orang di dalam: %d \n", masukpintu);
    printf("sekarang, orang keluar pintu. satu orang");

    masukpintu--;

    printf("total orang di dalam saat ini: %d \n", masukpintu);

    

    return 0;
}