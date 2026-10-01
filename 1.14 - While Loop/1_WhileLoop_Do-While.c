#include <stdio.h>

int main() {
    // perintah 'do' ini bagus. sebab bisa mengulang sesuatu yang sifatnya input

    /* (consider belum belajar perintah 'do')
    sebab, dengan perintah 'if' atau 'else', kita hanya bisa masuk ke situasi yang diinginkan dan masuk ke situasi itu hanya 1 kali saja.
    kalau pakai perintah 'switch', itu fungsinya kayak vlookup. harus ada database dan tidak mengulang.
    */

    int angka;

    do {
    printf("Tuliskan angka positif sebanyak mungkin! \n");
    printf("angka: ");
    scanf("%d", &angka);

    }while (angka > 0);
    printf("yah, malah nulis angka nol atau negatif. nt dah.");

    return 0;
}