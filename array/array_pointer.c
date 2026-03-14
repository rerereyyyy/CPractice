#include <stdio.h>

int main(void) {
    int arr[5] = {10,20,30,40,50};

    printf("arr[0]のアドレス: %p\n", &arr[0]);
    // 配列名は先頭アドレスのポインタ
    printf("arrのアドレス: %p\n", arr);

    // 配列をポインタとして扱う
    int *p = arr;
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", *(p+2));
}