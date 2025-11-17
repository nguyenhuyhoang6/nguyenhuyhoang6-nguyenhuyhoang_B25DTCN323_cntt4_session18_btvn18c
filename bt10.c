#include <stdio.h>
void xoaPhanTu(int arr[], int *size, int pos) {
    int i; 
    if (pos < 0 || pos >= *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; 
}

void inMang(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[10] = {3, 7, 1, 9, 4};
    int size = 5;
    int pos;
    printf("Mang ban dau: ");
    inMang(arr, size);
    printf("Nhap vi tri muon xoa (0 -> %d): ", size - 1);
    scanf("%d", &pos);
    xoaPhanTu(arr, &size, pos);
    printf("Mang sau khi xoa: ");
    inMang(arr, size);

    return 0;
}

