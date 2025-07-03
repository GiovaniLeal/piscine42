/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:giovani giovani@student.42.sp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:22:39 bygiovani            #+#    #+#             */
/*   Updated: 2025/07/03 19:22:39 bygiovani           ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print a character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// write a integer number
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = - nb;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb/10);
	}
	ft_putchar(nb % 10 + '0');
}

// print a integer array
void	print_array(int *tab, int size)
{
	int	index;
	index = 0;
	while (index < size)
	{
		ft_putnbr(tab[index]);
		if (index < size - 1)
		{
			write(1, ", ", 1);
		}
		index++;
	}
	write(1, "\n", 1);
}

// swap numbers of array
void	swap_numbers(int *nb_one, int *nb_two)
{
	int	temp;

	temp = *nb_one;
	*nb_one = *nb_two;
	*nb_two = temp;
}
//runs the array and calls a swap function
 void	ft_rev_int_tab(int *tab, int size)
 {
	int	current;

	current = 0;
	while (current < size / 2)
	{
		swap_numbers(&tab[current], &tab[size -1 - current]);
		current++;
	}
 }

//main
 int	main(void)
 {
	int	size;
	int	tab[] = {-1,20,3};

	size = sizeof(tab) / sizeof(int);

	print_array(tab, size);
	ft_rev_int_tab(tab,size);
	print_array(tab, size);
	return(0);	
 }