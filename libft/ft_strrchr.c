/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:54:35 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 15:42:04 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	char		find;
	size_t		i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (0);
}

// char	*ft_strrchr(const char *str, int c)
// {
// 	int		i;

// 	i = 0;
// 	if (str == NULL)
// 	{
// 		return (NULL);
// 	}
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	if (c == '\0')
// 	{
// 		return ((char *)(str + i));
// 	}
// 	while (i >= 0)
// 	{
// 		if (str[i] == c)
// 		{
// 			return ((char *)(str + i));
// 		}
// 		i--;
// 	}
// 	return (NULL);
// }

// int main() {
//     const char *str = "Hello, World!";
//     char characterToFind = 'o';

//     char *result = ft_strrchr(str, characterToFind);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", 
// characterToFind, result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", characterToFind);
//     }

//     return 0;
// }