/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:10:39 by marvin            #+#    #+#             */
/*   Updated: 2025/04/24 00:10:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	char *string = dest;

	while(*src != '\0')
	{ 
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
	return string;
}

/*
#include <stdio.h>
int		main(void)
{
	char	origin[] = "Teste 35";
	char	destiny[10];
	printf("%s", ft_strcpy(destiny,	origin));
	return 0;
}
*/