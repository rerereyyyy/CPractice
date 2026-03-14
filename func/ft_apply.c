#include <stdio.h>

void ft_apply(int *arr, int size, int (*f)(int))
{
    // 配列の全要素にfを適用する
    size--;
    while (size >= 0) {
        arr[size] = f(arr[size]);
        size--;
    }
}

int double_it(int n)
{
    return (n * 2);
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;

    ft_apply(arr, 5, double_it);
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
    // 出力: 2 4 6 8 10
}