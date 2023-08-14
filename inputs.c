#include <stdio.h>
    //$ getchar()

int main() {
    char c = getchar();
    printf("%c: %d\n", c, c);
    getchar();
    return 0;
}

