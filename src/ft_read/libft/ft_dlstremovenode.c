/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremovenode.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:01:17 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:01:30 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstremovenode(t_dlist **head)
{
	t_dlist	*ptr;

	if (*head)
	{
		if ((*head)->prev)
			(*head)->prev->next = (*head)->next;
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		ptr = *head;
		*head = (*head)->next ? (*head)->next : (*head)->prev;
		free(ptr->content);
		free(ptr);
	}
}
