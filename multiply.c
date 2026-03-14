#include <stdio.h>

void multiply(int *p) {
    *p *= 3;
}

int main(void) {
    int x = 4;
    printf("変更前: %d\n", x);
    multiply(&x);
    printf("変更後: %d\n", x);

    return(0);
}