#include <stdio.h>
#include <math.h>
int main() {
  int n; // so luong phan tu trong mang
  double *arr; // mang de luu tru cac so
  double avg; // bien de luu tru gia tri trung bình
  int closest; // bien de luu tru chi so cua phan tu gan nhat

  printf("Nhap so luong phan tu: ");
  scanf("%d", &n);

  // cap phát dong cho mang arr theo so luong phan tu nhap vào
  arr = (double *)malloc(sizeof(double)); // cap phát cho mot phan tu dau tiên

  printf("Nhap cac phan tu: ");
  for (int i = 0; i < n; i++) {
    scanf("%lf", &arr [i]);
    // cap nhat giá tri trung bình sau moi lan nhap
    avg = (avg * i + arr [i]) / (i + 1);
    // cap phát thêm bo nho cho mang n?u còn phan tu chua nhap
    if (i < n - 1) {
      arr = (double *)realloc(arr, (i + 2) * sizeof(double));
    }
  }

  printf("Giá tri trung bình là %.2f\n", avg);

  // khoi tao closest voi phan tu dau tien
  closest = 0;
  for (int i = 1; i < n; i++) {
    // so sánh tung phan tu voi giá tri trung bình su dung fabs()
    if (fabs(arr [i] - avg) < fabs(arr [closest] - avg)) {
      // cap nhat closest neu tìm thay phan tu gan hon
      closest = i;
    }
  }

  printf("Phan tu gan nhat voi gia tri trung binh la %.2f\n", arr [closest]);
  printf("Khoang cach cua phan tu gan nhat voi gia tri trung bình là %.2f\n", fabs(arr [closest] - avg));

  // giai phong bo nho da cap phat cho mang
  free(arr);
  
  return 0;
}
