/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Giovani <giovaniandradeleal@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:50:55 by Giovani            #+#    #+#            */
/*   Updated: 2025/05/08 16:50:55 by Giovani          ###   ########.sp       */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write (1, &z, 1);
		z--;
	}
}
// int	main(void)
// {
// 	ft_print_reverse_alphabet();
//	return (0);
// }


