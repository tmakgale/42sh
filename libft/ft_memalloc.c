/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atjiane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:15:43 by atjiane           #+#    #+#             */
/*   Updated: 2017/11/24 12:15:46 by atjiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t t)
{
	void *memory;

	memory = malloc(t);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, t);
	return (memory);
}
