/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:26:57 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:27:01 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*d;
	size_t	i;

	d = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (d);
}
