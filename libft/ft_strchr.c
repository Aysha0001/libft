/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:53:20 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 15:46:26 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (str[i] == (char)c)
	{
		return ((char *)(str + i));
	}
	return (0);
}

// int main(void)
// {
// 	char test[] = "hi im batman";
// 	int c = 'b';
// 	printf("%s\n",ft_strchr(test,c));
// }