/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sncube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:56:40 by sncube            #+#    #+#             */
/*   Updated: 2017/11/23 09:56:42 by sncube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

int		tc_putc(int c)
{
	return (write(0, &c, 1));
}

char	*env_getenv(char *key)
{
	int			i;
	char		*ret;
	extern char	**environ;

	i = 0;
	while (environ[i])
	{
		if ((ft_strncmp(environ[i], key, ft_strlen(key))) == 0 &&
				(environ[i][ft_strlen(key)] == '='))
		{
			ret = ft_strdup(ft_strchr(environ[i], '=') + 1);
			return (ret);
		}
		i++;
	}
	return (NULL);
}
