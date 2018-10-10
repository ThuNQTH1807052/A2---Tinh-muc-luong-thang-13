#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    do{
    int soNamKinhNghiem, soNamLamViec;
    printf("Vui long nhap so nam kinh nghiem: ");
    scanf("%d", &soNamKinhNghiem);
    printf("Vui long nhap so nam lam viec: ");
    scanf("%d", &soNamLamViec);

    int mucluong = 0;
    float heso =0 ;
    float thuongThang13 = 0;
    if (soNamKinhNghiem < 2){
        mucluong = 10;
    }
    if (soNamKinhNghiem >= 2 && soNamLamViec <= 5){
        mucluong = 20;
    } else{
        mucluong = 30;
    }

    if (soNamLamViec < 1){
        heso = 0.3;
    }
    if (soNamLamViec >= 1 && soNamLamViec < 2){
        heso = 0.5;
    }
    if (soNamLamViec >= 2 && soNamLamViec <= 5){
        heso = 1;
    } else {
        heso = 2;
    }
    thuongThang13 = mucluong * heso;
    printf("Muc thuong thang 13 cua ban la %2.f\n", thuongThang13);
    printf("\nAn n/N de thoat chuong trinh.\n");
    getchar();
    scanf("%c", &choice);
        }
    while (choice != 'n' && choice != 'N');
    return 0;
}