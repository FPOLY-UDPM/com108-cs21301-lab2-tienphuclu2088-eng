/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM8-CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
int a,b;
int tong,hieu;
a=10;
b=59;
tong=a+b;
hieu=a-b;
printf("Tong cua %d va %d la: %d\n",a,b,tong);
printf("Hieu cua %d va %d la: %d\n",a,b,hieu);
return 0;
}