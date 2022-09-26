/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zekaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:41:35 by zekaya            #+#    #+#             */
/*   Updated: 2022/09/02 20:47:13 by zekaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a, b, div, mod;

	a = 7;
	b	= 3;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
}*/