#include <stdio.h>
int main() {
    int pilihan;
    float tinggi, berat, bmi;
    //Input
	printf("===KALKULATOR BMI===\n");
	printf("1. Pria\n2. Wanita\n");
	printf("Pilihan: "); scanf("%d", &pilihan);
    //Proses percabangan
	switch (pilihan) {
		case 1:
        printf("Masukkan Tinggi Badan (Meter): ");
            scanf("%f", &tinggi);

            printf("Masukkan Berat Badan (Kilogram): ");
            scanf("%f", &berat);

            bmi = berat / (tinggi * tinggi);
            printf("===OUTPUT===\n");
            printf("BMI Anda: %.2f\n", bmi);

            if (bmi >= 17 && bmi <= 23) {
                printf("Badan Ideal\n");
            } else {
                printf("Badan Tidak Ideal\n");
            }
            break;
        case 2:
        printf("Masukkan Tinggi Badan (Meter): ");
            scanf("%f", &tinggi);

            printf("Masukkan Berat Badan (Kilogram): ");
            scanf("%f", &berat);

            bmi = berat / (tinggi * tinggi);
            printf("===OUTPUT===\n");
            printf("BMI Anda: %.2f\n", bmi);

            if (bmi >= 18 && bmi <= 25) {
                printf("Badan Ideal\n");
            } else {
                printf("Badan Tidak Ideal\n");
            }
            break;
            default :
            printf("Pilihan jenis kelamin tidak valid. \n");
            break;
    }
}
