#include <unistd.h>

void    ft_ultimate_ft(int *********nbr) //atribui o valor 42
{
    *********nbr = 42;
}

void    print_char(char string_number) //imprime char
{
    write (1, &string_number, 1);
}

void    convert_number (int number) // converte int para char por repercursão
{
    if (number >= 10)
    {
        convert_number( number/10);
    }
    print_char((number % 10)+ '0');
}




int main(void)
{
    int numero = 10;
    int *ponteiro = &numero;
    int **ponteiro2 = &ponteiro;
    int ***ponteiro3 = &ponteiro2;
    int ****ponteiro4 = &ponteiro3;
    int *****ponteiro5 = &ponteiro4;
    int ******ponteiro6 = &ponteiro5;
    int *******ponteiro7 = &ponteiro6;
    int ********ponteiro8 = &ponteiro7;
    int *********ponteiro9 = &ponteiro8;

    ft_ultimate_ft(ponteiro9);
    convert_number(numero);
 
    return 0;
}