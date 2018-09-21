/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isemptystr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:25:06 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:25:07 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isemptystr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			return (0);
	}
	return (1);
}
