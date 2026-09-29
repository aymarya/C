#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("jadi ada materi tentang 'sizeof'. fungsinya untuk mengetahui berapa size yang dipakai dalam codingan ini \n");
    printf("gunakan spesifikator 'persenzu' untuk memanggil data variabel tipe 'sizeof' \n");   
    printf("mengetahui sizeof dari suatu variabel, berfungsi apabila kita bekerja dalam memori yang terlimitasi atau terbatas \n");
    printf("oleh karena itu, penting untuk mengetahui berapa besaran dari masing-masing variabel yang akan kita gunakan. \n \n");

    printf("secara berurutan, berikut variabelnya. ada int, float, double, dan char \n");

    printf("ini besaran Int: %zu\n", sizeof(myInt));
    printf("ini besaran Float: %zu\n", sizeof(myFloat));
    printf("ini besaran Double: %zu\n", sizeof(myDouble));
    printf("ini besaran Char: %zu\n", sizeof(myChar));
    
    return 0;
}