#include <stdio.h>

int main () {
    printf("nyoba yang lain lagi nih, katanya ada buat ngehilangan di belakang koma \n");
    float angka_ = 3.5;

    printf("misal nih ya, float 3,5. itu hasilnya adalah ini %f \n", angka_);
    printf("nah ini ada 6 digit angka di belakang koma. sekarang gimana cara fixnya? mudah, tambahkan saja ini '.n' di antara format spesifikator. n diisi dengan angka \n");
    printf("misal, persenf ya. itu jadinya persen.1f \n \n");

    printf("kita print lagi \n");
    printf("ini angkanya: %.1f \n \n", angka_);

    printf("sekarang kita pakai 2 angka di belakang koma: %.2f \n \n", angka_);
    
    return 0;
}