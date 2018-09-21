/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   glob_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sncube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:53:19 by sncube            #+#    #+#             */
/*   Updated: 2017/11/23 09:53:21 by sncube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

static	int		squre1(char *s1, char *s2)
{
	int i;
	int found;

	i = 1;
	found = 0;
	while (s2[i] && s2[i] != ']')
	{
		if (s2[i] == '-')
		{
			if (*s1 >= s2[i - 1] && *s1 <= s2[i + 1])
				found = 1;
		}
		if (s2[i] == *s1)
			found = 1;
		i++;
	}
	if (found)
		return (match(s1 + 1, s2 + ++i));
	return (0);
}

static	int		squre2(char *s1, char *s2)
{
	int i;

	i = 1;
	while (s2[i] && s2[i] != ']')
	{
		if (s2[i] == '-')
		{
			if (*s1 >= s2[i - 1] && *s1 <= s2[i + 1])
				return (0);
		}
		if (s2[i] == *s1)
			return (0);
		i++;
	}
	return (match(s1 + 1, s2 + ++i));
}

int				match(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
		return (1);
	if (*s2 == '*' && *s1 != '\0')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (*s2 == '*' && *s1 == '\0')
		return (match(s1, s2 + 1));
	else if (*s2 == '?')
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '[' && *(s2 + 1) != '!' && *(s2 + 1) != '^')
		return (squre1(s1, s2));
	else if (*s2 == '[')
		return (squre2(s1, s2));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else
		return (0);
}

int				glob_match(char *pat, char *str)
{
	return (match(str, pat));
}
