#include <stdio.h>

void themPhanTu(int *arr, int *size, int value, int pos) {
    int i; // ðýa ra ngoài

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

void xoaPhanTu(int *arr, int *size, int pos) {
    int i; // ðýa ra ngoài

    if (pos < 0 || pos >= *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void capNhat(int *arr, int size, int pos, int newValue) {
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[pos] = newValue;
}

void hienThi(int *arr, int size) {
    int i; // ðýa ra ngoài

    if (size == 0) {
        printf("Mang rong!\n");
        return;
    }

    printf("Mang hien tai: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int size = 0;
    int choice;

    do {
        printf("\n===== Quan Ly Danh Sach So Nguyen =====\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu tai vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Hien thi mang\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int value, pos;
                printf("Nhap gia tri: ");
                scanf("%d", &value);
                printf("Nhap vi tri (0 -> %d): ", size);
                scanf("%d", &pos);
                themPhanTu(arr, &size, value, pos);
                break;
            }

            case 2: {
                int pos;
                printf("Nhap vi tri muon xoa (0 -> %d): ", size - 1);
                scanf("%d", &pos);
                xoaPhanTu(arr, &size, pos);
                break;
            }

            case 3: {
                int pos, newVal;
                printf("Nhap vi tri muon cap nhat (0 -> %d): ", size - 1);
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &newVal);
                capNhat(arr, size, pos, newVal);
                break;
            }

            case 4:
                hienThi(arr, size);
                break;

            case 5:
                printf("Da thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 5);

    return 0;
}

