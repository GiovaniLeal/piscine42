/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:16:55 by marvin            #+#    #+#             */
/*   Updated: 2025/04/30 23:16:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	src_index;

	src_index = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while (src[src_index] != '\0')
	{
		dest[count_dest] = src[src_index];
		count_dest++;
		src_index++;
	}
	dest[count_dest] = '\0';
	return (dest);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	str_one[] = "United we stand, ";
// 	char	str_two[] = "divided we fall.";

// 	printf(" %s\n", ft_strcat(str_one, str_two));
//	return (0);
// }