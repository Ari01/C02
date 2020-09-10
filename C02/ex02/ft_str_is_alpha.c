/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:56:13 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/10 16:33:13 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122)
			return (0);
		if (str[i] > 90 && str[i] < 97)
			return (0);
		i++;
	}
	return (1);
}
