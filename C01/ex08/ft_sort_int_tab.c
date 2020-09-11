/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 09:35:40 by dchheang          #+#    #+#             */
/*   Updated: 2020/09/11 12:30:53 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = size - 1;
	j = 0;
	while (i > 0)
	{
		while (j <= i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i--;
	}
}


int main(){
	int tab[10] = {9,5,7,8,4,3,6,2,1,10};
	int i;
	int size = 10;

	ft_sort_int_tab(tab,size);

	for(i=0; i<size; i++){
		printf("%d\n",tab[i]);
	}

	return 0;
}
