/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:15:26 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/14 11:28:27 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ctohex(char c)
{
	char	*s;

	s = "0123456789abcdef";
	return (s[c % 16]);
}

void	ft_putchar_hex(char c)
{
	if (!(c / 16))
	{
		c = ctohex(c);
		ft_putchar(c);
	}
	else
	{
		ft_putchar_hex(c / 16);
		c = ctohex(c);
		ft_putchar(c);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] >= 10 && str[i] <= 15)
				ft_putchar('0');
			ft_putchar_hex(str[i]);
		}
		else if (str[i] >= 32 && str[i] < 127)
			ft_putchar(str[i]);
		i++;
	}
}
