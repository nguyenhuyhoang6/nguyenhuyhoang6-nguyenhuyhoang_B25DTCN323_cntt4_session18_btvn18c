#include <stdio.h>
#include <string.h>
int main() {
    char inputString[100];
    char reverseString[100];
    char *pInput, *pReverse;
    int length, i;
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    length = strlen(inputString);
    if (inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
        length--;
    }
    pInput = inputString;
    pReverse = reverseString;
    for (i = 0; i < length; i++) {
        *(pReverse + i) = *(pInput + (length - 1 - i));
    }
    *(pReverse + length) = '\0';
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}

