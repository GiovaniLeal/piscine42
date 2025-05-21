/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Giovani<Giovanistudent.42.sp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:25:08 by Giovani           #+#    #+#             */
/*   Updated: 2025/05/08 17:25:08 by Giovani          ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print numbers
void	print_comb(char one, char two, char three)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &three, 1);
	if (one != '7' || two != '8' || three != '9')
		write(1, ", ", 2);
	else
		write(1, ".", 1);
}

//control sequence numbers
void ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			while (three <= '9')
			{
				print_comb(one, two, three++);
			}
			two++;
		}
		one++;
	}
}
// int	main(void)
// {
// 	ft_print_comb();
//	return (0);
// }