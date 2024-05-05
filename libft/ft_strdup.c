/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:25:14 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 15:48:37 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*st1;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i] != '\0' )
	{
		i++;
	}
	st1 = (char *)malloc((sizeof(char)) * (i + 1));
	if (st1 != 0)
	{
		while (s1[j] != '\0')
		{
			st1[j] = s1[j];
			j++;
		}
		st1[j] = '\0';
	}
	return (st1);
}
// int main()
// {
//     char s[]="hello";
//     printf("%s", 	ft_strdup(s));
//     return 0;
// }