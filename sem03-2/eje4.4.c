#include <stdio.h>

int main(void) {
    int a = 2, b = 3, c = 4;
    printf("%d\n", a + b * c);
    printf("%d\n", (a + b) * c);
    printf("%d\n", a > b && b < c);
    printf("%d\n", 1 << 2 + 3);
    return 0;
}