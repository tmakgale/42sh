/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstgettail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 11:59:45 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 11:59:53 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstgettail(t_dlist *dlst)
{
	while (dlst)
	{
		if (dlst->next)
			dlst = dlst->next;
		else
			break ;
	}
	return (dlst);
}
