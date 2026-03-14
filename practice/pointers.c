#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x; // pはxのメモリアドレスを持つ

    printf("xの値: %d\n", x);
    printf("xのアドレス: %p\n",&x);
    printf("pが指す値: %d\n", *p);

    *p = 100;
    printf("変更後の値x: %d\n",x);

    return(0);
}