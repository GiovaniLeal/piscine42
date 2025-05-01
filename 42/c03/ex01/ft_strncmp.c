/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 22:57:57 by marvin            #+#    #+#             */
/*   Updated: 2025/04/30 22:57:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] == s2[index] && index < n && s1[index] != '\0')
	{
		index++;
	}
	if (index == n)
	{
		return (0);		
	}
	else
	{
		return (s1[index] - s2[index]);
	}
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	str_one[] = "First code test";
// 	char	str_two[] = "First code test";
// 	char	str_three[] = "A45ab";
// 	char	str_four[] = "35Aaz";
// 	char	str_five[] = "a34hdfbcd";
// 	char	str_six[] = "ABdydtCD";
// 	char	str_seven[] = "1e5723";
// 	char	str_eight[] = "5te$$";

// 	//strings iguais = Resultado esperado n
// 	printf("S1 == s2 = %d\n", ft_strncmp(str_one, str_two, 5));

// 	//Strings diferentes = caractere de s1 menor que s2
// 	printf("s1 > s2 = %d\n", ft_strncmp(str_three, str_four, 3 ));

// 	//Strings diferentes = caractere de s1 maior que s2
// 	printf("s1 > s2 = %d\n", ft_strncmp(str_five, str_six, 4));

// 	//Strings diferentes = comparando diferentes caracteres
// 	printf("s1 < s2 = %d\n", ft_strncmp(str_seven, str_eight, 2));
// 	return (0);
// }