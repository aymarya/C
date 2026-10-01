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
    int angka = timer;

    // proses while loop
    while (angka < 5) {
        printf("Hitung Naik... %d \n", angka);
        angka++;
    }
}