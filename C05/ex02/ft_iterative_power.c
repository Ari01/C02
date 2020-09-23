/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:30:19 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/15 18:09:38 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0 || !nb)
		return (0);
	if ((!nb && !power) || !power || nb == 1)
		return (1);
	while (--power)
		result *= nb;
	return (result);
}
