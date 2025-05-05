/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 21:13:46 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 21:13:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);	
	if (index == 1)
		return (1);	
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));	
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("Numero da sequencia: %d\n",ft_fibonacci(10));
// }