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
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    printf("Mang ban dau: ");
    inMang(arr, size);
    capNhat(arr, size, 999, 2); 
    printf("Mang sau khi cap nhat: ");
    inMang(arr, size);
    return 0;
}

