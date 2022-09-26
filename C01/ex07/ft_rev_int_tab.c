/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zekaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:40:53 by zekaya            #+#    #+#             */
/*   Updated: 2022/09/01 19:52:30 by zekaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	a;

	first = 0;
	last = size - 1;
	while (last >= size / 2)
	{
		a = tab[first];
		tab[first] = tab[last];
		tab[last] = a;
		first++;
		last--;
	}
}
/*int main()
{
	int tab[5]={1,2,3,4,5};
	int size=5;
	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d", tab[0],tab[1],tab[2],tab[3],tab[4]);
}*/
