#include <stdio.h>

int ackermann(int m, int n) {
    static int cont = 0;
    cont++;

    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int rsp= ackermann(3, 4);
    printf("ackermann(3,4) = %d\n", rsp);
    return 0;
}