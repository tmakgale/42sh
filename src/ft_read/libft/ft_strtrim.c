/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:34:40 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:34:45 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tr;
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	tr = ft_strdup(s);
	if (!tr)
		return (NULL);
	else
	{
		i = 0;
		while (tr[i] == ' ' || tr[i] == '\n' || tr[i] == '\t')
			i++;
		tr = ft_strcpy(tr, tr + i);
		i = ft_strlen(tr) - 1;
		while ((tr[i] == ' ' || tr[i] == '\n' || tr[i] == '\t') && i >= 0)
		{
			tr[i] = '\0';
			i--;
		}
		ret = ft_strdup(tr);
		free(tr);
		return (ret);
	}
}
