/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:53:38 by abataine          #+#    #+#             */
/*   Updated: 2023/11/23 16:18:45 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	*f(unsigned int index, char c)
// {
// 	return (c + 'A');
// }

// int main() 
// {
//     char input_string[] = "Hello, world!";
//     char *modified_string = ft_strmapi(input_string, *f);
//     if (modified_string != NULL) {
//         printf("Modified string: %s\n", modified_string);
//         free(modified_string); // Don't forget to free the memory
//     } else {
//         printf("Memory allocation error\n");
//     } 
//     return 0;
// }
