/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM8-CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
int chieu_dai, chieu_rong;
int chu_vi, dien_tich;
printf("Nhap chieu dai hinh chu nhat: ");
scanf("%d", &chieu_dai);
printf("Nhap chieu rong hinh chu nhat: ");
scanf("%d", &chieu_rong);
chu_vi = 2 * (chieu_dai + chieu_rong);
dien_tich = chieu_dai * chieu_rong;
printf("Chu vi hinh chu nhat la: %d\n", chu_vi);
printf("Dien tich hinh chu nhat la: %d\n", dien_tich);
return 0;
}