int ft_strlen(char	*str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);

}
char	*ft_strrev(char *str)
{
	int first;
	int len;
	int tmp;
	len = ft_strlen(str)-1;
	first = 0;
	while(len > first)
	{
		tmp = str[first];
		str[first] =str[len];
	    str[len] = tmp;
		first++;
		len--;	
	}
	return(str);
}
#include <stdio.h>
int main()
{
	char str[] = "zeynep";
	printf("%s", ft_strrev(str));
}
