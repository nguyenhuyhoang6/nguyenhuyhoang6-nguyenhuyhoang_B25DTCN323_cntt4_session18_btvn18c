#include <stdio.h>
void capNhat(int arr[], int size, int newValue, int position) {
    if (position < 0 || position >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[position] = newValue;
}
void inMang(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5};  
    int size = 5;
    int newValue, pos;
    printf("Mang ban dau: ");
    inMang(arr, size);
    printf("Nhap vi tri muon cap nhat (0 -> %d): ", size - 1);
    scanf("%d", &pos);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    capNhat(arr, size, newValue, pos);
    printf("Mang sau khi cap nhat: ");
    inMang(arr, size);
    return 0;
}

