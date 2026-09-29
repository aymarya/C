#include <stdio.h>

int main() {
    
    int time;
    printf("ini adalah teks \n");
    printf("sekarang kita akan mencoba ternary operation \n \n");
    
    // memulai input, variabel 'time'
    printf("pukul berapa waktu saat ini? \n");
    scanf("%d", &time);

    (time < 18) ? printf("Good day.") : printf("Good evening.");

    return 0;
}