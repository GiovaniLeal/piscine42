/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovani<giovanistudent.42.sp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:07:03 by giovani           #+#    #+#             */
/*   Updated: 2025/05/08 18:07:03 by giovani          ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print 
void	print_char(char one, char two)
{
	write (1, &one, 1);
	write (1, &two, 1);
	if (one != '9' || two != '9')
	{
		write (1, ", ", 2);
	}
}

// sequence 
void	ft_print_comb2(void)
{
	char	one;
	char	two;

	one = '0';
	while (one <= '9')
	{	two = '0';
		while (two <= '9')
		{
			print_char(one, two);
			two++;
		}
		one++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }