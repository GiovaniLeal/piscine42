/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2n25/n4/3n 21:37:24 by marvin            #+#    #+#             */
/*   Updated: 2n25/n4/3n 21:37:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while(s1[index] == s2[index] && s1[index] != '\0')
	{		
		index++;						
	}
	if (s1[index] != s2[index])
	{
		return (s1[index] - s2[index]);
	}
	else
	{	
		return (0);
	}
}	


// #include<stdio.h>
// int	main(void)
// {
// 	char	str_one[] = "First code test";
// 	char	str_two[] = "First code test";
// 	char	str_three[] = "Aab";
// 	char	str_four[] = "Aaz";
// 	char	str_five[] = "abcd";
// 	char	str_six[] = "ABCD";
// 	char	str_seven[] = "123";
// 	char	str_eight[] = "@$$";

// 	//strings iguais = Resultado esperado n
// 	printf("S1 == s2 = %d\n", ft_strcmp(str_one, str_two));

// 	//Strings diferentes = caractere de s1 menor que s2
// 	printf("s1 < s2 = %d\n", ft_strcmp(str_three, str_four));

// 	//Strings diferentes = caractere de s1 maior que s2
// 	printf("s1 > s2 = %d\n", ft_strcmp(str_five, str_six));

// 	//Strings diferentes = comparando diferentes caracteres
// 	printf("s1 < s2 = %d\n", ft_strcmp(str_seven, str_eight));
// 	return (0);
// }


