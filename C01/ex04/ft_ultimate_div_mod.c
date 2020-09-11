/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 08:30:42 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/11 12:21:44 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}

int main()
{
	int a = 6;
	int b = 4;
	ft_ultimate_div_mod(&a,&b);
	printf("%d%d\n",a,b);

	return 0;
}
