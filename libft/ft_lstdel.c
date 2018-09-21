/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:59:16 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 11:59:23 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;
	t_list		*current;

	if (!alst || !*alst)
		return ;
	current = *alst;
	while (current)
	{
		temp = current->next;
		ft_lstdelone(&current, del);
		current = temp;
	}
	*alst = NULL;
}
