#include <stdio.h>
int main() {
    int a = 20;      
    int *p = &a; 
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a (su dung &): %p\n", &a);
    printf("Gia tri cua a (qua con tro *p): %d\n", *p);
    printf("Dia chi cua a (qua con tro p): %p\n", p);
    return 0;
}

