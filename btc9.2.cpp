#include <stdio.h>
int main() {
    int n, position, newValue;
    printf(" nhap kihc thuoc cua  mang: ");
    scanf("%d", &n);
    int arr[n];				// khai bao, hnap gtr ban dau 
    printf(" nhap gia tri cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf(" nhap vi tri can sua (0 -> %d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf(" vi tri khong khop\n");
        return 1;			//kth ctr neu false 
    }
    printf(" nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[position] = newValue;		//gtr cu bi thay doi 
    printf(" mang sau khi da duoc sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

