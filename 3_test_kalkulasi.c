#include <stdio.h>
#include <math.h>

int main(){
    int jarijari = 5;
    float pi = M_PI;

    printf("terdapat lingkaran dengan besar jari-jari 5cm \n");
    printf("berapa luasnya?");

    printf("jawabannya adalah: \n");
    
    float hasil = pi*jarijari*jarijari;
    printf("ini hasilnya %f cm^2", hasil);

    return 0;
}