#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("test \n");

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // mengecek komparasi antara dua variabel
    // == berarti 'apakah sama atau tidak'. jika sama, mengembalikan angka 1 (true/benar). Jika tidak, mengembalikan angka 0 (false/salah/tidak sama)
    printf("contoh boolean/situasi untuk mengatur logika program berdasarkan True dan False. \n di bawah ini adalah contoh benar: \n");
    printf("%d \n", isHamburgerTasty == isPizzaTasty);

    bool isNattoTasty = false;
    printf("contoh boolean tidak benar/false \n");
    printf("%d \n", isHamburgerTasty == isNattoTasty);

    return 0;
}