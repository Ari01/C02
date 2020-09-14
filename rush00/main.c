/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 10:00:06 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/12 10:36:02 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++j < y)
	{
		while  (++i < x)
		{
			if (!j || j == y-1)
			{
				if (!i)
					ft_putchar('/');
				else if (i == x - 1)
					ft_putchar('\');
			}
			if (i == x - 1)
				ft_putchar('\n');
		}
	}
}

int		main(void)
{
	rush(5, 3);
	return (0);
}
