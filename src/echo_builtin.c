/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngubane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 12:57:59 by mngubane          #+#    #+#             */
/*   Updated: 2017/11/23 12:58:02 by mngubane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shell.h"

int			exec_command_echo(char **line)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (line[i])
	{
		j = 0;
		while (line[i][j])
		{
			if (line[i][j] != '"' && line[i][j] != '\'')
				ft_putchar(line[i][j]);
			j++;
		}
		if (line[i][0] == '\n')
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (1);
}

void		cm_nstr(char *s)
{
	int		i;

	i = ft_strlen(s);
	ft_putstr(s);
	while (i < 20)
	{
		ft_putchar(' ');
		i++;
	}
}

int			cm_echo(char **s)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (s[i])
	{
		cm_nstr(s[i]);
		if (j == 4)
		{
			ft_putchar('\n');
			j = -1;
		}
		i++;
		j++;
	}
	ft_putchar('\n');
	return (1);
}
