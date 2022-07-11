#include <stdio.h>

int main()
{
	int nim,w,x,y,z;
	char nama;
	float rata;
	 	
	printf("Masukkan Nama Mahasiswa: ");
	scanf("%s", &nama);
	printf("Masukkan NIM Mahasiswa: ");
	scanf("%d", &nim);

	printf("Masukkan Nilai Pemrograman Dasar: ");
	scanf("%d", &w);
	printf("Masukkan Nilai Kalkulus: ");
	scanf("%d", &x);
	printf("Masukkan Nilai PTI: ");
	scanf("%d", &y);
	printf("Masukkan Nilai ORKOM: ");
	scanf("%d", &z);

		rata =(w+x+y+z)/4;
	
	printf("=========================================\n");
	
	printf("%s \n", nama );
	printf("%d \n", nim );
	printf("Nilai Pemrograman Dasar : %d/100 \n", w );
	printf("Nilai Kalkulus : %d/100 \n", x );
	printf("Nilai PTI : %d/100 \n", y );
	printf("Nilai ORKOM : %d/100 \n", z );

	printf("Nilai Rata-rata : %.2f \n", rata );

	
	if(rata>=75)
		{
			printf("ANDA LULUS");
		}
	else
		{
			printf("ANDA GAGAL");
		}
	return 0;
	
}