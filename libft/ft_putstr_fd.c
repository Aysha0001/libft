/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:06:24 by abataine          #+#    #+#             */
/*   Updated: 2023/11/20 17:42:10 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*t;

	t = s;
	while (*t != '\0')
	{
		write(fd, t, 1);
		t++;
	}
}

// int main()
//  {

//     ft_putstr_fd("hello", 1);

//     return 0;
// }