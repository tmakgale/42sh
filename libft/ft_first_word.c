/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:10:26 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:10:28 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_first_word(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	while (!ft_is_blank(str[i]))
		i++;
	ret = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (!ft_is_blank(str[i]))
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}
