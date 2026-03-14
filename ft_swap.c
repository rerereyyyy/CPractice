#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(void)
{
    int x = 10;
    int y = 20;

    ft_swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);  // x: 20, y: 10
}