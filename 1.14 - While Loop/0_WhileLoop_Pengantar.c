#include <stdio.h>

int main(){
    int timer;

    // output, sambutan
    printf("Selamat Pagi, mohon masukkkan angka yang anda minati!\n");
    printf("Masukkan Angka:  ");

    // input angka integer
    scanf("%d", &timer);
    printf("\n");
    
    // mengubah variabel timer menjadi waktu mundur
    int mundur = timer;

    // proses while loop
    while (mundur > 0) {
        printf("Hitung mundur telah dimulai...%d!! \n", mundur);
        mundur--;
    }
    printf("\n");
    printf("C4 diaktifkan! \n");
}