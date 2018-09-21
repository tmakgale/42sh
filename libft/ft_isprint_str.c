/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:29:15 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:29:17 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint_str(char *str)
{
	int i;
	int len;

	len = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		if (ft_isprint(str[i]))
			i++;
	}
	if (i == len)
		return (1);
	else
		return (0);
}
