/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstgethead.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 11:59:18 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 11:59:29 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstgethead(t_dlist *dlst)
{
	while (dlst)
	{
		if (dlst->prev)
			dlst = dlst->prev;
		else
			break ;
	}
	return (dlst);
}
