#include<unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

void    print_char(char character)
{
    write(1, &character, 1);
}

void    convert_int_to_character(int number)
{
    if( number >= 10)
    {
        convert_int_to_character(number / 10);
    }
    print_char((number % 10) + '0');
}

int    main(void)
{
    int number_a = 6;
    int number_b = 2;
    int divided  = 0;
    int leftover = 0;

    ft_div_mod(number_a, number_b, &divided, &leftover);
    convert_int_to_character (number_a);
    print_char ('\n');
    convert_int_to_character (number_b);
    print_char ('\n');
    convert_int_to_character (divided);
    print_char ('\n');
    convert_int_to_character (leftover);
    print_char ('\n');
}