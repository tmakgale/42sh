/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 12:20:32 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 12:20:36 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
	}
}
