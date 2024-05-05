/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:48:17 by abataine          #+#    #+#             */
/*   Updated: 2023/11/23 23:18:51 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (src <= dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t			i;
// 	unsigned char	*d;
// 	unsigned char	*s;

// 	d = (unsigned char *)dst;
// 	s = (unsigned char *)src;
// 	i = 0;
// 	if (dst == NULL || src == NULL)
// 	{
// 		return (NULL); 
// 	}
// 	if (d > s)
// 	{
// 		while (len-- > 0)
// 		{
// 			d[len] = s[len];
// 		}
// 	}
// 	else
// 	{
// 		while (i < len)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	}
// 	return (dst);
// }
/*
int		main(void)
{
	char	hello1[30] = "girhello";
	char	hello2[30] = "girhello";
	int		size = 5;
	printf("%s\n", (char *)ft_memmove(
								(void *)(hello2),
								(void *)(hello2 + 3),
								size));
	
	return (0);
}
*/
