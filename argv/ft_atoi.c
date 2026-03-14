#include <stdio.h>

int ft_atoi(char *str)
{
    // "42" → 42 に変換する
    int result = 0;
    int i = 0;

    while (str[i] != '\0') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (result);
    
}

int main(void)
{
    printf("%d\n", ft_atoi("42"));    // 42
    printf("%d\n", ft_atoi("123"));   // 123
    printf("%d\n", ft_atoi("0"));     // 0
}