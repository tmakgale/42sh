/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstremoveif.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:00:53 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:00:58 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstremoveif(t_dlist **head, int cmp())
{
	t_dlist	*ptr;

	while (*head)
	{
		if (cmp((*head)->content, (*head)->content_size))
		{
			if ((*head)->prev)
				(*head)->prev->next = (*head)->next;
			if ((*head)->next)
				(*head)->next->prev = (*head)->prev;
			ptr = *head;
			*head = (*head)->prev ? (*head)->prev : (*head)->next;
			free(ptr->content);
			free(ptr);
		}
		head = &(*head)->next;
	}
}
