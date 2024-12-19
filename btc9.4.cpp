#include <stdio.h>
#define maxSize 100
// bai nay quen lam, em da lam o dau roi 
void nhapMang(int arr[], int *n) {
    printf(" nhap so phan tu muon nhap (toi da %d): ", maxSize);
    scanf("%d", n);
    if (*n <= 0 || *n > maxSize) {
        printf(" so phan tu k hop le \n");
        *n = 0;
        return;
    }
    printf(" nhap gia tri cho mang: \n");
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void hienThiMang(int arr[], int n) {
    if (n == 0) {
        printf(" mang rong \n");
        return;
    }
    printf("cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void themPhanTu(int arr[], int *n) {
    if (*n >= maxSize) {
        printf(" mang full, k the them ptu\n");
        return;
    }
    int value, position;
    printf(" nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them <<0 -> %d>>: ", *n);
    scanf("%d", &position);
    if (position < 0 || position > *n) {
        printf("vi tri sai \n");
        return;
    }
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*n)++;
    printf(" them phan tu thanh cong \n");
}
void suaPhanTu(int arr[], int n) {
    if (n == 0) {
        printf(" mang rong k them duoc phantu \n");
        return;
    }
    int position, newValue;
    printf(" nhap vi tri can sua (0 -> %d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf(" vi tri khong hop le!\n");
        return;
    }
    printf(" nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[position] = newValue;
    printf(" sua phan tu thanh cong \n");
}
void xoaPhanTu(int arr[], int *n) {
    if (*n == 0) {
        printf(" mang rong k xao duoc phantu \n");
        return;
    }
    int position;
    printf(" nhap vi tri can xoa (0 -> %d): ", *n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= *n) {
        printf(" vi tri k dung \n");
        return;
    }
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf(" xoa phan tu thanh cong \n");
}
int main() {
    int arr[maxSize], n = 0, choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai!\n");
        }
    } while (choice != 6);
    return 0;
}
// bai nay dien roiiiiiiiiiii, AI xin duoc tai tro chuong trinh 
