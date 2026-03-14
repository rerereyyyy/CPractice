#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    // destの末尾にsrcをつなげる
    int i = 0;
     while (dest[i] != '\0') {
        i++;
    }

    int k = 0;
    while (src[k] != '\0') {
        dest[i + k] = src[k];
        k++;
    }

    dest[i + k] = '\0';
    return (dest);

}

int main(void)
{
    char dest[20] = "hello, ";

    ft_strcat(dest, "world");
    printf("%s\n", dest);  // hello, world
}