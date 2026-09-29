#include <stdio.h>
#include <stdbool.h>

int main() {
  
  int punyaAkun;
  int sudahLogin;
  
  printf("Pengecekan untuk pengambilan hadiah \n" );
  printf("apakah anda sudah punya akun? ketik 1 jika ya, ketik 0 jika tidak: \n");
  scanf("%d", &punyaAkun);

  printf("apakah anda sudah login? ketik 1 jika ya, ketik 0 jika tidak \n");
  scanf("%d", &sudahLogin);

  int kondisi = punyaAkun + sudahLogin;

  if(kondisi == 2){
    printf("Silakan ambil jalur cepat");
  } 
  else if (kondisi == 1){
    printf("Silakan ambil jalur normal");
  }
  else {
  printf("Silakan daftar akun terlebih dahulu");
  }

  return 0;
}