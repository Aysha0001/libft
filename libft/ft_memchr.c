/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:52:21 by abataine          #+#    #+#             */
/*   Updated: 2023/11/20 20:44:24 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t					i;
	const unsigned char		*str1;
	unsigned char			ch;

	str1 = (const unsigned char *)str;
	ch = (unsigned char )c;
	i = 0;
	while (i < len)
	{
		if (*str1 == ch)
		{
			return ((void *)str1);
		}
		str1++;
		i++;
	}
	return (NULL);
}

// int		main(void)
// {
// 	char str[] = "goodbye";
// 	char src = 'd';
// 	size_t lc = 4;

// 	printf("%s\n", (char*)ft_memchr(str, src, lc));

// 	return (0);
// }