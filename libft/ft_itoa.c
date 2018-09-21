/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:30:39 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:30:40 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_return(char *ptr)
{
	char		*str;
	int			i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	if (!(str = (char *)ft_memalloc(sizeof(i + 1))))
		return (NULL);
	ft_strcpy(str, ptr);
	return (str);
}

char			*ft_itoa(int n)
{
	int			neg;
	char		*ptr;
	long int	num;
	char		temp_size[50];

	neg = 0;
	num = n;
	ptr = &temp_size[50];
	*ptr = '\0';
	if (num == 0)
		*--ptr = '0';
	if (num < 0)
	{
		neg = 1;
		num = num * -1;
	}
	while (num > 0)
	{
		*--ptr = num % 10 + '0';
		num = num / 10;
	}
	if (neg == 1)
		*--ptr = '-';
	return (ft_return(ptr));
}
