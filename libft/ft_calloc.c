/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:57:53 by abataine          #+#    #+#             */
/*   Updated: 2023/11/20 17:56:57 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;
	size_t			i;

	i = 0;
	memory = (unsigned char *)malloc(count * size);
	if (memory == 0)
	{
		return (NULL);
	}
	if (memory != 0)
	{
		while (i < (count * size))
		{
			memory[i] = 0;
			i++;
		}
	}
	return (memory);
}
// int	main(void)
// {
// 	void	*ptrc;
// 	void	*ptrm;
// 	int		i;

// 	ptrc = calloc(3, 4);
// 	ptrm = malloc(12);
// 	i = 0;
// 	while (i < 12)
// 	{
// 		printf("%c__", ((char *)ptrm)[i] + 48);
// 		printf("%c\n", ((char *)ptrc)[i] + 48);
// 		i++;
// 	}
// }
