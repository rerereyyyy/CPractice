#include <stdio.h>

void add_one(int *p) {
    *p = *p + 1;
}

int main(void) {
    int x = 42;

    printf("変更前: %d\n", x);
    add_one(&x);
    printf("変更後: %d\n", x);

    return(0);
}