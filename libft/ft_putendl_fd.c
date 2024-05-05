/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:55:54 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 14:24:33 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*t;

	t = s;
	while (*t != '\0')
	{
		write(fd, t, 1);
		t++;
	}
	write(fd, "\n", 1);
}
// int main() 
// {
//     ft_putendl_fd("hello", 1);
//     return 0;
// }