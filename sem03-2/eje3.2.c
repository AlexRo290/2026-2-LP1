
#include <stdio.h>

#define BIT(n) (1u << (n))

int main(void) {


    int n = 5;
    printf("5 << 1 = %d (= 5*2)\n", n << 1);
    printf("5 << 3 = %d (= 5*8)\n", n << 3);
    printf("40 >> 3 = %d (= 40/8)\n", 40 >> 3);


    unsigned char flags = 0;
    flags |= BIT(2);  
    flags |= BIT(5); 
    printf("flags = 0x%02X\n", flags);
    printf("bit 2 encendido? %d\n", (flags & BIT(2)) != 0);
    printf("bit 3 encendido? %d\n", (flags & BIT(3)) != 0);


    flags &= ~BIT(2);
    printf("tras apagar bit 2: 0x%02X\n", flags);

   
    flags ^= BIT(5);
    printf("tras toggle bit 5: 0x%02X\n", flags);

    
    int x = 13, y = 27;
    x ^= y;
    y ^= x;
    x ^= y;
    printf("x=%d, y=%d\n", x, y);

    return 0;
}