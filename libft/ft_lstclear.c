/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:08:46 by abataine          #+#    #+#             */
/*   Updated: 2023/11/23 17:57:00 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	temp = 0;
	while (current)
	{
		if (current->next)
			temp = current->next;
		else
			temp = 0;
		del(current->content);
		free(current);
		current = temp;
	}
	*lst = 0;
}
