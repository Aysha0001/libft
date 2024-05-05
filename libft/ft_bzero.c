/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:44:19 by abataine          #+#    #+#             */
/*   Updated: 2023/11/13 18:44:20 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char s[] = "reem";
// 	ft_bzero(s,3);
// 	int i=0;
// 	while (i < 3)
// 	{
// 		printf("%d", s[i]);
// 		i++;
// 	}
// 	printf("%c",*s);
// 	return(0);
// }
