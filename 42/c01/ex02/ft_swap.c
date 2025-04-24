#include <unistd.h> // lembrar de retirar ou comentar isso antes do push

void    ft_swap(int *a, int *b) //converte valor original
{
    *a = 30;
    *b = 60;
}

void    print_char(char character) // impressão
{
    write(1, &character, 1);
}

void    convert_int_to_char(int number) //converte inteiros em caracteres
{
    if (number >= 10)
    {
        convert_int_to_char(number/10);
    }
    print_char(( number% 10)+ '0');
}

int main(void)
{
    int number_one = 0;
    int number_two = 2;

    ft_swap(&number_one, &number_two);
    convert_int_to_char (number_one);
    print_char(',');
    convert_int_to_char(number_two);
    return 0;
}

