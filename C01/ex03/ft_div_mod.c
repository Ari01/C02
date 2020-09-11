/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 08:26:02 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/11 12:20:02 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 6;
	int b = 4;
	int div = 0;
	int mod = 0;
	ft_div_mod(a,b,&div,&mod);
	printf("%d%d\n",div,mod);

	return 0;
}
