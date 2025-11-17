#include <stdio.h>
void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}
int main() {
    int x = 7;
    int y = 5;
    int result;
    tinhTong(x, y, &result);
    printf("Tong = %d\n", result);
    return 0;
}

