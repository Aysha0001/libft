/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:48:35 by abataine          #+#    #+#             */
/*   Updated: 2023/11/20 17:43:37 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	unsigned char	d;
	size_t			i;

	a = (unsigned char *)b;
	d = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		a[i] = d;
		i++;
	}
	return (b);
}

// int     main(void)
// {
//     char    str[] = "hello";
// 	printf("%s\n", (char *)ft_memset(str, ';', 3));
//     return (0);
// }
