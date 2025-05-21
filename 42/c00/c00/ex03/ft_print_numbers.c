/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovani<giovanistudent.42.sp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:10:40 by giovani           #+#    #+#             */
/*   Updated: 2025/05/08 17:10:40 by giovani          ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char	numb;

	numb = '0';
	while (numb <= '9')
	{
		write (1, &numb, 1);
		numb++;
	}
}
// int	main(void)
// {
// 	ft_print_numbers();
//	return (0);
// }
