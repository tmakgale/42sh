/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:02:36 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:02:41 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int len;

	len = ft_strlen(str);
	while (len != 0 && str[len] != (char)c)
		len--;
	while (str[len] == (char)c)
		return ((char *)&str[len]);
	return (NULL);
}
