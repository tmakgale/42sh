/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 11:57:39 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 11:57:45 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd(t_dlist **head, t_dlist *new)
{
	t_dlist	*ptr;

	ptr = NULL;
	if (!new || !head)
		return ;
	new->next = *head;
	if (*head)
	{
		ptr = (*head)->prev;
		(*head)->prev = new;
	}
	new->prev = ptr;
	if (ptr)
		ptr->next = new;
	*head = new;
}
