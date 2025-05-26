/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovani<giovanid@student.42.sp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:25:24 by giovani           #+#    #+#             */
/*   Updated: 2025/05/21 11:25:24 by giovani          ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Converts an array of integers to characters and prints them to standard output
void	print_numbers(int *array, int size) 
{
	char number;
	int count = 0;

	while (count < size) 
	{
		number = array[count] + '0';
		write(1, &number, 1);
		count++;
	}
}

// Generates and prints all increasing combinations of n distinct digits (0–9)
void	ft_print_combn(int n)
{
	int array[n];
	int index = 0;
	int current = n - 1;

	while (index < n ) 
	{
		array[index] = index;
		index++;
	}

	while (1)
	{
		print_numbers(array, n);
		if (array[0] != 10 - n)
			write(1, ", ", 2);
		while (current >= 0 && array[current] == 10 - (n - current))
			current--;
		if (current < 0) 
			break;	
		array[current]++;
		index = current + 1;
		while (index < n) 
		{
			array[index] = array[index - 1] + 1;
			index++;
		}		
	}
}

// === main ===
int	main(void)
{
	ft_print_combn(3); // Example: prints all combinations of 3 distinct digits
	return (0);
}