/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM8-CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    int so1, so2;
    int tich, thuong;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    tich = so1 * so2;
    thuong = so1 / so2;
    printf("Tich cua %d va %d la: %d\n", so1, so2, tich);
    printf("Thuong cua %d va %d la: %d\n", so1, so2, thuong);
    return 0;
} 