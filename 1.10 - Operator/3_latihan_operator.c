#include <stdio.h>

/*
Inside main(), complete the following steps:

1. Declare two int variables named itemPrice and shippingCost, and assign them values
2. Create an int variable named sum 
3. Calculate the total cost by adding itemPrice and shippingCost (store the result in sum) 
4. Print the total cost using printf
*/

int main() {
    int itemPrice = 20;
    int shippingCost = 500;
    char currency = 'R';

    int sum = itemPrice + shippingCost;

    printf("ini hasil dari total harga barang ditambah dengan biaya kirim barang: %d %c \n", sum,currency);

    return 0;
}