/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abataine <abataine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:44:25 by abataine          #+#    #+#             */
/*   Updated: 2023/11/20 18:11:05 by abataine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
// int main(void) {
//     int value = 42;
//     t_list *new_node = ft_lstnew(&value);

//     if (new_node != NULL) {
//         printf("Content: %d\n", *(int *)(new_node->content));
//         printf("Next: %p\n", (void *)(new_node->next));}
//     free(new_node);
// }