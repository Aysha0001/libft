/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:19:19 by abataine          #+#    #+#             */
/*   Updated: 2023/11/20 22:43:29 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	char	*st1;

	st1 = NULL;
	i = 0;
	k = -1;
	if (s1 && s2)
	{
		st1 = (char *)malloc ((sizeof(char)) * ((ft_strlen(s1)
						+ ft_strlen(s2)) + 1));
		if (!st1)
			return (NULL);
		while (s1[i] != '\0')
		{
			st1[i] = s1[i];
			i++;
		}
		while (s2[++k] != '\0')
		{
			st1[i + k] = s2[k];
		}
	}
	st1[i + k] = '\0';
	return (st1);
}

// int main()
// {
// 	printf("%s",ft_strjoin("hello ", "world"));
// 	return(0);
// }