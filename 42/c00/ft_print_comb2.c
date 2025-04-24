#include <unistd.h>

void    print(int number)
{
    char dezena = (number / 10) + '0';
    char unidade = (number % 10) + '0';
    write(1, &dezena, 1);
    write(1, &unidade, 1);
}

void    ft_print_comb2(void)
{
    int pair_one;
    int pair_two;

    pair_one = 0;
    while (pair_one <= 98)
    {
        pair_two = pair_one + 1;
        while (pair_two <= 99)
        {
            print(pair_one);
            write(1, " ", 1);
            print(pair_two);

            if(!(pair_one == 98 && pair_two == 99))
            {
                write(1, ", ", 2);
            }
            pair_two++;       
        }
        pair_one++;
    }   
}

int main(void)
{
    ft_print_comb2();
    return (0);
}