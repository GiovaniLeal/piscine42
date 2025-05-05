/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:01:13 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 20:01:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb) 
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);	
	return (nb * ft_recursive_factorial(nb - 1));	
}

// #include<stdio.h>

// int    main(void)
// {
// 	printf("Numero negativo: %d\n", ft_recursive_factorial(-5));
// 	printf("Numero zero: %d\n", ft_recursive_factorial(0));
// 	printf("Numero positivo: %d\n", ft_recursive_factorial(5));
// }