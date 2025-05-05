/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:12:17 by marvin            #+#    #+#             */
/*   Updated: 2025/05/04 18:12:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int    result;

    result = 1;
    if (nb < 0 )
    {
        return (0);
    }    
    else
    {
        while(nb > 1)
        {
            result*= nb;
            nb--;
        }
    }
    return (result);
}
// #include<stdio.h>

// int    main(void)
// {
// 	printf("Numero negativo: %d\n", ft_iterative_factorial(-5));
// 	printf("Numero zero: %d\n", ft_iterative_factorial(0));
// 	printf("Numero positivo: %d\n", ft_iterative_factorial(5));
// }