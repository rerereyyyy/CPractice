#include <stdio.h>

int main(void) {
    char str[] = "hello";
    int i = 0;

    while (str[i] != '\0') {
        printf("%c\n",str[i]);
        i++;
    }

    printf("長さ: %d\n",i);
    return(0);
}