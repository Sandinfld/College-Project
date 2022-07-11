#include <stdio.h>
#include "math.h"

int main(){
    //menentukan luas persegi dan persegi panjang
    int panjang,lebar,luas; 

    printf("masukkan panjang : ");
    scanf("%d", &panjang);
    printf("masukkan lebar : ");
    scanf("%d", &lebar);

    luas = panjang * lebar;
    printf("luas persegi panjang adalah %d\n", luas);

    return 0;

}