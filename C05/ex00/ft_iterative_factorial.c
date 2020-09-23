/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:06:25 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/15 17:21:35 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	i = 2;
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		while (i <= nb)
			fact *= i++;
	}
	return (fact);
}
