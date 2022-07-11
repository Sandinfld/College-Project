#include <stdio.h>

int luasPermukaanTabung(int r, int t);
int volumeTabung(int r, int t);

int main(){

	float r, t;
	float l, v;

    printf("Masukkan Jari Jari Alas Tabung Dalam Cm : ");
    scanf("%f", &r);
    printf("Masukkan Tinggi Tabung Dalam Cm : ");
    scanf("%f", &t);
    
	l = luasPermukaanTabung(r,t);
    v = volumeTabung(r,t);

    printf("Luas Permukaan Tabung Adalah : %.2f cm2\n", l);
    printf("Volume Tabung Adalah : %.2f cm3\n", v);
    return 0;
}

int luasPermukaanTabung(int r,int t){
	int l;
	l = 2 * 3.14 * r * ( r * t );
	return l;
}

int volumeTabung(int r,int t){
	int v;
	v = 3.14 * r * r * t;
	return v;
}