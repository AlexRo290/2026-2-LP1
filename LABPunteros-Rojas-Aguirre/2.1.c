#include <stdio.h>

int main(void) {
    
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("x = %d, *p = %d, **pp = %d\n\n", x, *p, **pp);

    
    printf("x   = %d, &x   = %p\n", x, (void *)&x);
    printf("p   = %p, &p  = %p\n", (void *)p, (void *)&p);
    printf("pp  = %p, &pp = %p\n\n", (void *)pp, (void *)&pp);
    
    *p = 100;
    printf("*p = 100 -> x = %d\n", x);

    **pp = 200;
    printf("**pp = 200 -> x = %d\n", x);

    return 0;
}
