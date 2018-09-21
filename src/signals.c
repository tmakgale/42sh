/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngubane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:01:31 by mngubane          #+#    #+#             */
/*   Updated: 2017/11/23 13:01:33 by mngubane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/shell.h"

void	exit_handler(int n)
{
	if (n == SIGINT)
	{
		tcsetattr(0, TCSANOW, &oterm);
		exit(EXIT_SUCCESS);
	}
}

void	proc_handler(int sign_n)
{
	(void)sign_n;
	signal(SIGINT, &proc_handler);
}

void	proccess_handler(int sign_n)
{
	(void)sign_n;
	signal(SIGINT, &proccess_handler);
	ft_putchar('\n');
}
