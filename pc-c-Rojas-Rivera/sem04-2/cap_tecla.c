#include<stdio.h>

int main()
{
    // Leer caracteres hasta que se presione la tecla 'q'
    char c;
    for(;;)
    {
        c = getchar();
        if(c == 'q')
        {
            printf("Se termino la lectura de caracteres\n");
            break;
        } else {
            if(c != 10) {
               printf("Se presiono la tecla: %c\n", c);
            }
        }
    }

    return 0;
}