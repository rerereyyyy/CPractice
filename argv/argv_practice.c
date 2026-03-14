#include <stdio.h>

int main(int argc, char **argv) {
    int i = 1;

    
    while (i < argc) {
        printf("%s ",argv[i]);
        if (i + 1 < argc){
            printf(" ");
        }
        i++;
    }
    return(0);
}