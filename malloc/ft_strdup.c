#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    // 1. srcの長さを調べる
    int i = 0;
    while (src[i] != '\0') {
        i++;
    }
    // 2. 長さ+1分のメモリをmallocで確保（+1は'\0'の分）
    char *dest = (char *)malloc(sizeof(char) * (i + 1));
    // 3. srcをdestにコピー
    int k = 0;
    while(src[k] != '\0') {
        dest[k] = src[k];
        k++;
    }

    dest[k] = '\0';
    // 4. destを返す
    return (dest);
}

int main(void)
{
    char *copy = ft_strdup("hello");
    printf("%s\n", copy);  // hello
    free(copy);
    return (0);
}