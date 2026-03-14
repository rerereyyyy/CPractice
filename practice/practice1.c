#include <unistd.h>

void ft_putcar(char c) {
    write(1, &c, 1);
}

int main(void) {
    ft_putcar('A');
    return(0);
}