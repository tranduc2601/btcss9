#include <stdio.h>

int main() {
    int arr[100];	//mang co 100pt 
    int n;			//so pt hien co 
    int value, pos; // gtr va vtr chen 
    printf(" nhap so phan tu <<la so nguyen duong khong lon hon 100>>: ");
    scanf("%d", &n);
    if (n > 100 || n < 1) {
        printf(" so duoc nhap khong hop le\n");
        return 1;
    }
    printf(" nhahp vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf(" phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" nhap gia tri muon chen: ");
    scanf("%d", &value);
    printf(" nhap vi tri muon chen (1 <= vi tri <= %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf(" vi tri khong hop le\n");
        return 1;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];		//dich accs phan tu sang phai 
    }
    arr[pos - 1] = value;		//them gtr cho vtr duoc nahp 
    n++;						//tang so phan tu tring mang 
    printf(" mang sau khi chen:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
 // code xong can  
