#include <stdio.h>
int timKiem(int arr[], int n, int value) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = 7;
    int viTri = timKiem(arr, n, value);
    int i;
    printf("Mang: ");
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);
    }
    printf("\nGia tri can tim: %d\n", value);
    printf("Ket qua ham tra ve: %d\n", viTri);
    return 0;
}

