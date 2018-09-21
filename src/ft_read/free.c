/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sncube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:51:22 by sncube            #+#    #+#             */
/*   Updated: 2017/11/23 09:51:23 by sncube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

void	free_ptr(char **ptr)
{
	int i;

	if (ptr == NULL)
		return ;
	i = 0;
	while (ptr[i] != NULL)
	{
		free(ptr[i]);
		i++;
	}
	if (ptr != NULL)
		free(ptr);
}

char	*free_dup(char *dest, char *src)
{
	if (dest != NULL)
		free(dest);
	return (ft_strdup(src));
}

void	ft_free_join(char **holder, char *s1, char *s2)
{
	char	*tmp;

	tmp = *holder;
	*holder = ft_strjoin(s1, s2);
	if (tmp != NULL)
		free(tmp);
}
