/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:10:44 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:10:48 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*te;
	char	*tem;
	size_t	i;

	te = (char *)s1;
	tem = (char *)s2;
	i = 0;
	while (i < n && te[i] == tem[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)te[i] - (unsigned char)tem[i]);
}
