/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:43:41 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 15:40:49 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_node;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		new_node = *lst;
		while (new_node ->next != NULL)
		{
			new_node = new_node -> next;
		}
		new_node -> next = new;
	}
}
// int main()
// {
// 	t_list *shh;
// 	t_list *shh2;
// 	char *ch = "hello";

// 	shh = ft_lstnew(NULL);
// 	shh2 = ft_lstnew(ch);
// 	ft_lstadd_back(&shh, shh2);
// 	while(shh2)
// 	{
// 		printf("%s", shh2 -> content);
// 		shh2 = shh2 -> next;
// 	}
// }