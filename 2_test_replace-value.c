#include <stdio.h>

int main(){
    printf("kita coba replace value, ya \n");
    printf("misalkan, angka kita adalah 15 pada variabel angA \n");
    int angA = 15;
    printf("maka hasilnya adalah %d \n\n", angA);
    
    printf("lanjut, kita buat variabel angB dengan tanpa isi angka \n");
    printf("nah sekarang kita replace isi variable angB dengan angA. seharusnya keluar angka berapa, hayo? apakah error atau tidak \n");

    int angB = angA ;
    printf("nah ini angka yang keluar pada angB sekarang, yaitu %d", angB);
    
    return 0;
}