/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200]
 * Lớp:       [COM8-CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
 int diem_toan, diem_ly, diem_hoa;
 float diem_trung_binh;
 printf("Nhap diem mon Toan: "); 
 scanf("%d", &diem_toan);
 printf("Nhap diem mon Ly: ");
 scanf("%d", &diem_ly);
 printf("Nhap diem mon Hoa: ");
 scanf("%d", &diem_hoa);
 diem_trung_binh = (diem_toan * 3 + diem_ly * 2 + diem_hoa) / 6.0;
 printf("Diem trung binh la: %.2f\n", diem_trung_binh);
 return 0;
}