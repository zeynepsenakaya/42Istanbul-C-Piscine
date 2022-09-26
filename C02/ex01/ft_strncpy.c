/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zekaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:25:26 by zekaya            #+#    #+#             */
/*   Updated: 2022/09/03 19:28:31 by zekaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*first;

	if ((*dest == '\0') && (*src == '\0' ))
	{
		return (NULL);
	}
	first = dest;
	while (*src && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (first);
}
/*int main()
{
	char dest[10];
	char	src[] = "zeynep";
	ft_strncpy(dest,src,3);
	printf("%s", dest);

}*/
