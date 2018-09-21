/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngubane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:00:31 by mngubane          #+#    #+#             */
/*   Updated: 2017/11/23 13:00:33 by mngubane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shell.h"

static char	*hist_path(void)
{
	char	*path;
	char	*temp;

	temp = ft_getenv("$HOME");
	path = ft_strjoin(temp, "/.42sh_history");
	return (path);
}

int			read_history(void)
{
	int		fd;
	int		i;
	char	*line;
	char	*path;

	path = hist_path();
	fd = open(path, O_RDONLY);
	i = 0;
	free(path);
	while (get_next_line(fd, &line))
	{
		ft_putnbr(i++);
		ft_putchar(' ');
		ft_putendl(line);
		free(line);
	}
	close(fd);
	ft_putchar('\n');
	return (1);
}
