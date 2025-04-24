#include <unistd.h>

void    print(int character)
{
    char convert = character + '0';
    write(1, &convert, 1);
}
void    ft_print_comb(void)
{
    int one;
    int two;
    int three;

    one = 0;
    while( one <= 7)
    {
        two = one + 1;
        while (two <= 8)
        {
            three = two + 1;
            while (three <= 9)
            {
                print(one);
                print(two);
                print(three);
                if (!(one == 7 && two == 8 && three == 9))
                {
                    write(1, ", ", 2);
                }
                three++;
            }
            two++;
        }
        one++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}