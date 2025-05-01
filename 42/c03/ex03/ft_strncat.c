/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:31:28 by marvin            #+#    #+#             */
/*   Updated: 2025/04/30 23:31:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_dest;
	unsigned int	src_index;

	src_index = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
	{
		count_dest++;
	}
	while(src[src_index] != '\0' && src_index < nb)
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
// 	char	str_one[] = "To be or not to be, ";
// 	char	str_two[] = "that is the question.";
// 	printf("Frase completa : 'To be or not to be, that is the question'.\n");
// 	printf("%s\n", ft_strncat(str_one, str_two, 7));
// 	return (0);
// }