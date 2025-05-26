/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Giovani<Giovanistudent.42.sp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:17:57 by Giovani           #+#    #+#             */
/*   Updated: 2025/05/08 17:17:57 by Giovani          ###   ########.sp       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
// int	main(void) 
// {
// 	ft_is_negative(-9);
// 	ft_is_negative(0);
// 	ft_is_negative(9);
//	return (0);
// }