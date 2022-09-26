/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zekaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:59:06 by zekaya            #+#    #+#             */
/*   Updated: 2022/09/02 17:51:02 by zekaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	swap;

	while (size >= 0)
	{
		first = 0;
		while (first < size - 1)
		{
			if (tab[first] > tab[first + 1])
			{
				swap = tab[first];
				tab[first] = tab[first + 1];
				tab[first + 1] = swap;
			}
			first++;
		}
		size--;
	}
}
/*int main()
{
	int size = 5;
	int tab[5] = {1,4,6,3,2};
	ft_sort_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4]);
}*/
