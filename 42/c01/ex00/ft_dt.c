#include <unistd.h>
void    ft_ft(int *nbr) // converte valor do inteiro para 42
{
    *nbr = 123;
}

void    put_char(char c) // funcao de impressao 
{
    write(1, &c, 1);
}

void    put_number(int numb) // imprime valor usando repercursão
{
    if (numb > 10)
    {
        put_number(numb / 10);
    }
    put_char((numb % 10)+ '0');
}

int main(void)
{
    int numero = 3;
    ft_ft(&numero);
    put_number(numero);

    return 0;
}