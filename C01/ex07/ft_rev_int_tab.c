/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 08:44:35 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/11 12:29:08 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = size - 2;
	j = 0;
	while (i >= 0)
	{
		while (j <= i)
		{
			tmp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = tmp;
			j++;
		}
		j = 0;
		i--;
	}
}

int main(){
	int tab[10] = {1,2,3,4,5,6,7,8,9};
	int i;
	int size = 10;

	ft_rev_int_tab(tab,size);

	for(i=0; i<size; i++){
		printf("%d\n",tab[i]);
	}

	return 0;
}
