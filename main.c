#include <stdio.h>
#include <stdlib.h>

//Hàm tính lương tháng 13
float tinhluongthang13(int soNamKinhNghiem, int soNamCongHien) {
    int mucLuongCoBan, tyleThuong;
    if (soNamKinhNghiem < 2) {
        mucLuongCoBan = 10;
    } else if (soNamKinhNghiem >= 2 && soNamCongHien <= 5) {
        mucLuongCoBan = 20;
    } else {
        mucLuongCoBan = 30;
    }

    if (soNamCongHien < 1) {
        tyleThuong = 30;
    } else if (soNamCongHien >= 1 && soNamCongHien < 2) {
        tyleThuong = 50;
    } else if (soNamCongHien >= 2 && soNamCongHien <= 5) {
        tyleThuong = 100;
    } else {
        tyleThuong = 200;
    }
    return (float) mucLuongCoBan * tyleThuong / 100;
}

int main() {
    int soNamKinhNghiem, soNamCongHien;
    while (1) {
        //Nhập số năm kinh nghiệm và cống hiến
        printf("Vui long nhap so ma kinh nghiem:");
        scanf("%d", &soNamKinhNghiem);
        printf("Vui long nhap so ma cong hien:");
        scanf("%d", &soNamCongHien);
        getchar();
        //Gọi hàm, in kết quả
        float luongThang13 = tinhluongthang13(soNamKinhNghiem, soNamCongHien);
        printf("Luong thang 13 cua ban la: %.2f trieu\n", luongThang13);
        //Hỏi người dùng có tiếp tục không?
        printf("Ban co muon tiep tuc khong (y/n)?\n");
        char choice;
        scanf("%c", &choice);
        if (choice == 'n' || choice == 'N') {
            break;
        }
        getchar();
    }
    return 0;
}

//int main() {
//    char choice;
//    do{
//    int soNamKinhNghiem, soNamLamViec;
//    printf("Vui long nhap so nam kinh nghiem: ");
//    scanf("%d", &soNamKinhNghiem);
//    printf("Vui long nhap so nam lam viec: ");
//    scanf("%d", &soNamLamViec);
//    int mucluong = 0;
//    float heso =0 ;
//    float thuongThang13 = 0;
//    if (soNamKinhNghiem < 2){
//        mucluong = 10;
//    }
//    if (soNamKinhNghiem >= 2 && soNamLamViec <= 5){
//        mucluong = 20;
//    } else{
//        mucluong = 30;
//    }
//
//    if (soNamLamViec < 1){
//        heso = 0.3;
//    }
//    if (soNamLamViec >= 1 && soNamLamViec < 2){
//        heso = 0.5;
//    }
//    if (soNamLamViec >= 2 && soNamLamViec <= 5){
//        heso = 1;
//    } else {
//        heso = 2;
//    }
//    thuongThang13 = mucluong * heso;
//    printf("Muc thuong thang 13 cua ban la %.2f\n", thuongThang13);
//    printf("\nAn n/N de thoat chuong trinh.\n");
//    getchar();
//    scanf("%c", &choice);
//        }
//    while (choice != 'n' && choice != 'N');
//    return 0;
//}