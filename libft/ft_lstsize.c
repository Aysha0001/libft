/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:36:15 by abataine          #+#    #+#             */
/*   Updated: 2023/11/26 17:12:29 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

// int main(void) {

//     t_list *head = NULL;
//     for (int i = 0; i < 4; i++) {
//         t_list *new_node = (t_list *)malloc(sizeof(t_list));
//         new_node->content = NULL; 
//         new_node->next = head;
//         head = new_node;
//     }
// 	printf("%d",ft_lstsize(head));
// }
