#include<stdio.h>
#include<conio.h>

int main()
{
    // Leer caracteres hasta que se presione la tecla 'q'
    char c;
    for(;;)
    {
        c = getch();
        if(c == 'q')
        {
            printf("Se termino la lectura de caracteres\n");
            break;
        } else {
               printf("Se presiono la tecla: %c\n", c);
        }
        
    }

    return 0;
}