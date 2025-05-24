
#include <stdio.h>

double tambah(double a, double b) {
    return a + b;
}
double kurang(double a, double b) {
    return a - b;
}
double kali(double a, double b) {
    return a * b;
}
double bagi(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Kesalahan: Tidak bisa membagi dengan nol.\n");
        return 0;
    }
}

int main() {
    double angka1, angka2, hasil;
    char operator;
    char lanjut;
    double riwayatHasil[100]; 
    int jumlahPerhitungan = 0;

    do {
        printf("====== KALKULATOR SEDERHANA ======\n");
        printf("Masukkan angka pertama: ");
        scanf("%lf", &angka1);
        printf("Masukkan operator (+, -, *, /): ");
        scanf(" %c", &operator);
        printf("Masukkan angka kedua: ");
        scanf("%lf", &angka2);
        if (operator == '+') {
            hasil = tambah(angka1, angka2);
            printf("Hasil: %.2lf\n", hasil);
        } else if (operator == '-') {
            hasil = kurang(angka1, angka2);
            printf("Hasil: %.2lf\n", hasil);
        } else if (operator == '*') {
            hasil = kali(angka1, angka2);
            printf("Hasil: %.2lf\n", hasil);
        } else if (operator == '/') {
            hasil = bagi(angka1, angka2);
            printf("Hasil: %.2lf\n", hasil);
        } else {
            printf("Operator tidak dikenali.\n");
            continue;
        }
        riwayatHasil[jumlahPerhitungan] = hasil;
        jumlahPerhitungan++;
        printf("Apakah Anda ingin menghitung lagi? (y/n): ");
        scanf(" %c", &lanjut);
    } while (lanjut == 'y' || lanjut == 'Y');
    printf("\n=== Riwayat Hasil Perhitungan ===\n");
    for (int i = 0; i < jumlahPerhitungan; i++) {
        printf("Perhitungan ke-%d: %.2lf\n", i + 1, riwayatHasil[i]);
    }

    printf("Terima kasih telah menggunakan kalkulator ini!\n");
    return 0;
}
