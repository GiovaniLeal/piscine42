/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:27:10 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 20:27:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}	
	return (result);
}
// #include<stdio.h>
	
// int	main(void)
// {
//     printf("Potencia menor que zero: %d\n", ft_iterative_power(2, -1));
//     printf("Numero e potencia igual a zero: %d\n", ft_iterative_power(0, 0));
//     printf("Numeros positivo: %d\n", ft_iterative_power(2,3));
// }