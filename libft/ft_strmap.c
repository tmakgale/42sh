/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:21:45 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:21:48 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
	{
		return (NULL);
	}
	str = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (s)
		while (s[i])
		{
			str[i] = f((char)s[i]);
			i++;
		}
	return (str);
}
