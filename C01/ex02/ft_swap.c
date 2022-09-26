/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zekaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:22:51 by zekaya            #+#    #+#             */
/*   Updated: 2022/08/31 16:39:16 by zekaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b )
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
/*int main()
{
	int c;
	int *a = 1;
	int *b = 2;
	ft_swap(c);
	printf("%d", c)
}*/
