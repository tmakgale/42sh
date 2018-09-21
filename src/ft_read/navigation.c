/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sncube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:56:27 by sncube            #+#    #+#             */
/*   Updated: 2017/11/23 09:56:29 by sncube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

void	goto_next_word(t_read *line)
{
	while (line->cmd[line->cursor] != ' ' && line->cursor != line->length)
		cright(line);
	while (line->cmd[line->cursor] == ' ' && line->cursor != line->length)
		cright(line);
}

void	goto_prev_word(t_read *line)
{
	if (line->cursor && line->cmd[line->cursor - 1] == ' ')
		cleft(line);
	while (line->cmd[line->cursor] == ' ' && line->cursor)
		cleft(line);
	while (line->cmd[line->cursor] != ' ' && line->cursor)
		cleft(line);
	if (line->cursor)
		cright(line);
}

void	goto_next_line(t_read *line)
{
	line->cursor = line->cursor + line->winsz.col > line->length ?
		line->length : line->cursor + line->winsz.col;
	set_curpos(line);
}

void	goto_prev_line(t_read *line)
{
	line->cursor = line->cursor < line->winsz.col ? 0 : line->cursor -
		line->winsz.col;
	set_curpos(line);
}
