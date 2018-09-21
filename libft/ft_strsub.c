/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:16:50 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:16:52 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ft_memalloc(len + 1);
	if (!str)
		return (NULL);
	if (s)
		while (s[start + i] && i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	return (str);
}
