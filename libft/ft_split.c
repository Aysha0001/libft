/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:04:54 by abataine          #+#    #+#             */
/*   Updated: 2024/04/09 02:41:27 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	word_length(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**f(char const *s, char c, char **result, int words_count)
{
	int	i;
	int	j;
	int	w_len;

	while (*s == c)
		s++;
	i = -1;
	while (++i < words_count)
	{
		while (*s == c)
			s++;
		j = 0;
		w_len = word_length(s, c);
		result[i] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!(result[i]))
			return (NULL);
		while (j < w_len)
		{
			result[i][j] = *s;
			s++;
			j++;
		}
		result[i][j] = '\0';
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wcount;

	if (!s)
		return (NULL);
	wcount = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!(result))
		return (NULL);
	result = f(s, c, result, wcount);
	result[wcount] = NULL;
	return (result);
}

// static size_t	ft_countword(char const *s, char c)
// {
// 	size_t	count;

// 	if (!*s)
// 		return (0);
// 	count = 0;
// 	while (*s)
// 	{
// 		while (*s == c)
// 			s++;
// 		if (*s)
// 			count++;
// 		while (*s != c && *s)
// 			s++;
// 	}
// 	return (count);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**lst;
// 	size_t	word_len;
// 	int		i;

// 	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
// 	if (!s || !lst)
// 		return (0);
// 	i = 0;
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (*s)
// 		{
// 			if (!ft_strchr(s, c))
// 				word_len = ft_strlen(s);
// 			else
// 				word_len = ft_strchr(s, c) - s;
// 			lst[i++] = ft_substr(s, 0, word_len);
// 			s += word_len;
// 		}
// 	}
// 	lst[i] = NULL;
// 	return (lst);
// }

// int main()
// {
// 	char **new;
// 	int		i;

// 	i = 0;
// 	new  = ft_split("hello world this is batman can you stop me?", ' ');
// 	while (new[i])
// 	{
// 		printf("%s\n", new[i]);
// 			i++;
// 	}
// }
