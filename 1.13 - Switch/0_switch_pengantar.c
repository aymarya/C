#include <stdio.h>

int main() {
    printf("masuk materi: Switch \n");
    printf("switch ini alternatif dari 'if...else if'. \n daripada capek ngetik kondisi dengan komparator semacam == atau != \n mending langsung tulis per case jika nilai variabelnya jelas \n \n");

    // panggil variabel

    int  hari;

    printf("Kapan kamu punya hari yang luang? (1-5) \n");
    scanf("%d", &hari);

    switch (hari) {

    case 1:
    printf("Senin");
    break;
    case 2:
    printf("Selasa");
    break;
    case 3:
    printf("Rabu");
    break;
    case 4:
    printf("Kamis");
    break;
    case 5:
    printf("Jumat");
    break;

    default:
    printf("Ah weekend aja kalau gitu ya. gaskan deh!");
    }

    return 0;
}