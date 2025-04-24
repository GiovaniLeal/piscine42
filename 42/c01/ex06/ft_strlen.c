#include <unistd.h>

int     ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

void    put_char(char character)
{ 
    write(1, &character, 1);
}

void    convert_int_to_char(int number)
{
    if (number >= 10)
    {
        convert_int_to_char(number / 10);
    }
    put_char((number % 10) + '0');
}


int     main(void)
{
    int string_size;
    char string[] = "Se a classe operaria tudo produz, a ela tudo pertence";
    string_size = ft_strlen(string);
    convert_int_to_char(string_size);
    return 0;
}