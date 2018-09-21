/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:10:01 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:10:05 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	size;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (ft_splitcounter(s, c) + 1))))
		return (NULL);
	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[size++] = ft_strsub(s, start, i - start);
		}
	}
	str[size] = NULL;
	return (str);
}
