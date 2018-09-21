/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sncube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:59:23 by sncube            #+#    #+#             */
/*   Updated: 2017/11/23 09:59:26 by sncube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shell.h"

static int	local_found(char *val)
{
	int		f;
	int		i;

	i = 0;
	f = 0;
	while (g_local[i])
	{
		if ((ft_strncmp(val, g_local[i], ft_strlen(val)) == 0) &&
				(g_local[i][ft_strlen(val)] == '='))
		{
			f++;
		}
		i++;
	}
	if (f)
		return (i);
	else
		return (0);
}

int			ft_unset(char *val)
{
	char	**tmp;

	if (!val)
		return (1);
	tmp = ft_strsplit(val, ' ');
	unsetenv_builtin(tmp);
	if (!val || !local_found(val))
	{
		(!val) ? ft_putendl("Please specify the environment to remove") : 0;
		return (1);
	}
	tmp = (char **)malloc(sizeof(char *) * (local_found(val)));
	while (g_local[g_shell->g_local_i])
	{
		if (!((ft_strncmp(val, g_local[g_shell->g_local_i], !ft_strlen(val))) &&
					(g_local[g_shell->g_local_i][ft_strlen(val)] == '=')))
		{
			tmp[g_shell->g_local_j++] = ft_strdup(g_local[g_shell->g_local_i]);
		}
		g_shell->g_local_i++;
	}
	tmp[g_shell->g_local_j] = NULL;
	g_local = tmp;
	return (1);
}
