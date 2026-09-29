#include <stdio.h>
#include <stdbool.h>

int main() {

    int level;
    char akun; 
    bool status;
    
    //pengantar dan pembuka
    printf("Hari ini kita akan membuat if dalam if atau if bertingkat. kombinasi juga dengan else \n");
    printf("kita buat variasi if bertingkat dari pengambilan hadiah yang pakai booolean, dengan konsep angka dan level. \n \n");

    //cek kondisi akun dan level
    printf("Apakah anda punya akun? (y/n) \n");
    scanf("%c", &akun);

    printf("\n");
    
    //Proses logika umum
    
    /*
    Jika punya akun, maka lanjut ke cek level.
    Jika punya akun dan level 0-100, maka masuk jalur A
    Jiika punya akun dan level 101-250, maka masuk jalur C
    jika tidak punya akun, maka masuk jalur D.
    */

    //proses logika input
    //konversi jawaban y atau n ke bool. (mengembalikan ke true atau false)

    if (akun == 'y'){
        status = true; 
    }
    else{
        status = false;
    }

    // versi ternary/singkat
    // bool status = (akun == 'y') ? true : false;

    if (status == 1){
        printf("Berapa level akun anda? (0-250) \n");
        scanf("%u", &level);

        if (level <= 100) {
        printf("Silakan ambil jalur A");
        }

        else {
        printf("Silakan ambil jalur C");
        }
    }
    else {
    printf("Silakan masuk jalur D");
    }

    return 0;
}