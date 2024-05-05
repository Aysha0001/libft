/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:50:32 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 15:50:52 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	if (needle_len == 0 || needle == haystack)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		i = 0;
		while (i < needle_len && haystack[i] == needle[i])
			i++;
		if (i == needle_len)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int main()
// {
//     char haystack[] = "hello world";
//     char needle[] = "lo";
//     size_t sizeyy = 6;
//     char *result = ft_strnstr(haystack, needle, sizeyy);
// printf("'%s' found: '%s'\n", needle, result);
// }