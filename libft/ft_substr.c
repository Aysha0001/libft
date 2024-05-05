/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:31:42 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 15:37:01 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	new_str = (char *)malloc((len + 1) *(sizeof(char)));
	if (!s || !(new_str))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

// int	main()
// {
// 	char *str = "tripouille";
// 	size_t size = 42;
// 	char *result = ft_substr(str, 0, size);

// 	printf("%s\n", result);
// 	free(result);
// 	return 0;
// }
