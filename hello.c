#include <stdio.h>
int main () {
    float a, b, c, d;
    //Input empat bilangan dari pengguna
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukan nilai c: ");
    scanf("%f", &c);
    printf("Masukan nilai d: ");
    scanf("%f", &d);
    //Melakukan operasi yang dijelaskan
    float hasil=(a+b)*(c-d);
    //Menampilkan hasil 
    printf("Hasil dari (%.2f + %.2f)*(%.2f-%.2f)=%.2f \n", a,b,c,d, hasil);
    return 0;
}
