/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:11:14 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:11:18 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*temp2;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	temp = (char *)dest;
	temp2 = (char *)src;
	while (i < n)
	{
		temp[i] = temp2[i];
		i++;
	}
	dest = (void *)temp;
	return (dest);
}
