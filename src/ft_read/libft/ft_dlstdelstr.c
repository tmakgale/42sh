/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 11:58:44 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 11:58:49 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdelstr(t_dlist **lst)
{
	t_dlist *tmp;

	*lst = ft_dlstgethead(*lst);
	while (*lst)
	{
		tmp = *lst;
		free((*lst)->content);
		*lst = (*lst)->next;
		free(tmp);
	}
}
