/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM8-CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
int ban_kink;
float chu_vi, dien_tich, pi=3.14;
printf("Nhap ban kinh hinh tron: ");
scanf("%d", &ban_kink);
chu_vi = 2 * pi * ban_kink;
dien_tich = pi * ban_kink * ban_kink;
printf("Chu vi hinh tron la: %.2f\n", chu_vi);
printf("Dien tich hinh tron la: %.2f\n", dien_tich);
return 0;    
}