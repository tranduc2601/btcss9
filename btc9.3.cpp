#include <stdio.h>
int main() {
    int arr[100];
    int n, position;
    printf(" nhap so phan tu muon dung <<khong qua 100>>: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf(" so phan tu khop voi chuong trinh\n");
        return 1; // K?t thúc chýõng tr?nh n?u s? ph?n t? không h?p l?
    }
    printf(" nhap gia tri cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf(" nhap vi tri can xoa <<0 -> %d>>: ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf(" vi tri khong dung\n");
        return 1;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf(" mang sau khi xoa phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
} 
