/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovani<giovani@student.42.sp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:30:50 by giovani           #+#    #+#             */
/*   Updated: 2025/05/08 18:30:50 by giovani          ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}
void	ft_putnbr(int nb)
{
	char	parse_nb[10];
	int	 i;

	i = 0;
	if (nb == 0)
	{
		put_char('0');
	}
	
	if (nb < 0)
	{
		put_char('-');
		nb = -nb;
	}
	while (nb != 0)
	{
		parse_nb[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while ( i >= 0)
	{
		put_char(parse_nb[i]);
		i--;
	}
}
// int	main(void)
// {
// 	ft_putnbr(-56);
// 	put_char('\n');
// 	ft_putnbr(0);
// 	put_char('\n');
// 	ft_putnbr(56);
// 	put_char('\n');
//	return (0);
// }