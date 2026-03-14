#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    if (argc != 3) {
        printf("使い方: ./atoi_basic 数字1 数字2\n");
        return (1);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    printf("%d + %d = %d\n", a, b, a + b);
    return (0);
}