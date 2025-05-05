/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 22:37:21 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 22:37:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int nb, int current)
{
	if (current * current == nb)
		return (current);
	if (current * current > nb)
		return (0);
	return (recursive(nb, current + 1));	
}
int ft_sqrt(int nb)
{
	int current;

	current = 0;
	if (nb < 0)
		return (0);
	return (recursive(nb, current));
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("Raiz quadrada exata : %d\n", ft_sqrt(16));
// 	printf("Raiz quadrada irracional : %d\n", ft_sqrt(7));
// }