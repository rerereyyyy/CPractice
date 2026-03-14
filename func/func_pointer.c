#include <stdio.h>

int add(int a, int b) {
    return (a + b);
}

int multiply(int a, int b) {
    return (a * b);
}

int main(void) {
    int (*f)(int, int);

    f = add;
    printf("%d\n", f(10, 20));

    f = multiply;
    printf("%d\n", f(10, 20));

    return (0);
}