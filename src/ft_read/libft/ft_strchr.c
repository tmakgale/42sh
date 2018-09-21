/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:18:54 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:20:16 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *haystack, int c)
{
	int		i;
	char	*temp;
	int		len;

	i = 0;
	len = ft_strlen(haystack) + 1;
	while (len)
	{
		if (haystack[i] == (char)c)
		{
			temp = (char *)(haystack + i);
			return ((char *)temp);
		}
		len--;
		i++;
	}
	return (NULL);
}
