#include <stdio.h>
void themPhanTu(int arr[], int *size, int value, int pos) {
    int i;  
    if (pos < 0 || pos > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value; 
    (*size)++;       
}
void inMang(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[20] = {5, 10, 15, 20, 25};
    int size = 5;
    int value, pos;
    printf("Mang ban dau: ");
    inMang(arr, size);
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0 -> %d): ", size);
    scanf("%d", &pos);
    themPhanTu(arr, &size, value, pos);
    printf("Mang sau khi them: ");
    inMang(arr, size);
    return 0;
}

