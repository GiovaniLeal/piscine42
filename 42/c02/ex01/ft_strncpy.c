/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:08:40 by giodos-s          #+#    #+#             */
/*   Updated: 2025/04/24 00:08:40 by giodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;
	char	*string = dest;

	count = 0;
	while( count < n)
	{
		if (*src == '\0')
		{
			*dest = 0;
		}
		else 
		{
			*dest = *src;
			src++;
		}
		dest++;
		count++;		
	}
	return string;
}

#include <stdio.h>
int		main(void)
{
	char origin[] = "Sera que vai?";
	char	destino[20];
	printf("%s\n", ft_strncpy(destino, origin, 1));
	printf("%s\n", ft_strncpy(destino, origin, 7));
	printf("%s\n", ft_strncpy(destino, origin, 20));
}