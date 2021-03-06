/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:59:29 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/13 14:21:35 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 0 || str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
