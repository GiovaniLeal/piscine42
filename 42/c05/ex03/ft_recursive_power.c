/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:52:00 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 20:52:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return(1);	
	if (nb == 0 && power == 0)
		return (1);
	return(nb * ft_recursive_power(nb, power -1));	
}
// #include<stdio.h>
	
// int	main(void)
// {
//     printf("Potencia menor que zero: %d\n", ft_recursive_power(2, -1));
//     printf("Numero e potencia iguais a zero: %d\n", ft_recursive_power(0, 0));
//     printf("Numeros positivos: %d\n", ft_recursive_power(2,3));
// }