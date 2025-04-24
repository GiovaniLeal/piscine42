#include<unistd.h>

void    put_char(char character)
{
    write(1, &character, 1);
}

void    ft_putstr(char *str)
{
    int index;

    index= 0;
    while (str[index] != '\0')
    {
        put_char(str[index]);
        index++;
    }
}

int     main(void)
{
    char string_array[] = "Espero um dia virar cadete";
    ft_putstr(string_array);
}