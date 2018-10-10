#include <stdio.h>

int main() {
    int soNamKinhNghiem, soNamCongHien;
    printf("Vui long nhap so nam kinh nghiem: ");
    scanf("%d", &soNamKinhNghiem);
    printf("Vui long nhap so nam lam viec: ");
    scanf("%d", &soNamCongHien);

    int mucluong;
    if (soNamKinhNghiem < 2){
        mucluong = 10;
    }
    if (soNamKinhNghiem >= 2 && soNamCongHien < 5){
        mucluong = 20;
    }
    if (soNamKinhNghiem > 5){
        mucluong = 30;
    }
    if (soNamCongHien < 1){
        printf("Muc thuong thang 13 cua ban la: %2.f trieu", (float) mucluong * 0.3);
    }
    if (soNamCongHien >= 1 && soNamCongHien < 2){
        printf("Muc thuong thang 13 cua ban la: %2.f trieu", (float) mucluong / 2);
    }
    if (soNamCongHien >= 2 && soNamCongHien <= 5){
        printf("Muc thuong thang 13 cua ban la: %d trieu", mucluong);
    }
    if (soNamCongHien > 5){
        printf("Muc thuong thang 13 cua ban la: %d trieu", mucluong * 2);
    }

    printf("\nAn n/N de thoat chuong trinh.\n");
    char choice;
    scanf("%c", &choice);
    getchar();
    switch (choice){
        case 'N' :
            printf("Ban da thoat chuong trinh. Hen gap lai!");
            break;
        case 'n' :
            printf("Ban da thoat chuong trinh. Hen gap lai!");
            break;
        default :
            printf("Phim ban nhap khong hop le");
            break;
    }
    return 0;
}