/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:11:12 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/15 18:53:09 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	if (power < 0 || !nb)
		return (0);
	if ((!nb && !power) || !power || nb == 1)
		return (1);
	if (!power % 2)
	{
		res = ft_recursive_power(nb, power / 2);
		return (res * res);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
