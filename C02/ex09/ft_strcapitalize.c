/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:15:33 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/11 12:59:25 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_lowcase(char c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int		ft_char_is_upcase(char c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

int		ft_char_is_numeric(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int		ft_char_is_alphanum(char c)
{
	if (ft_char_is_lowcase(c) || ft_char_is_upcase(c) || ft_char_is_numeric(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_char_is_lowcase(str[i]))
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (!ft_char_is_alphanum(str[i - 1]) && ft_char_is_alphanum(str[i]))
		{
			if (ft_char_is_lowcase(str[i]))
				str[i] -= 32;
			while (ft_char_is_alphanum(str[++i]))
			{
				if (ft_char_is_upcase(str[i]))
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
