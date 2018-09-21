/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmove.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sncube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:50:29 by sncube            #+#    #+#             */
/*   Updated: 2017/11/23 09:50:31 by sncube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

void	set_curpos(t_read *line)
{
	size_t	xpos;
	size_t	ypos;

	xpos = line->start.col + line->cursor % line->winsz.col;
	ypos = line->start.row + line->cursor / line->winsz.col;
	if (xpos > line->winsz.col)
	{
		xpos %= line->winsz.col;
		ypos++;
	}
	tputs(tgoto(tgetstr("cm", NULL), xpos - 1, ypos - 1), 0, &tc_putc);
}

void	cend(t_read *line)
{
	line->cursor = line->length;
	set_curpos(line);
}

void	chome(t_read *line)
{
	line->cursor = 0;
	set_curpos(line);
}

void	cleft(t_read *line)
{
	if (!line->cursor)
		return ;
	line->cursor--;
	set_curpos(line);
}

void	cright(t_read *line)
{
	if (line->cursor == line->length)
		return ;
	line->cursor++;
	set_curpos(line);
}
