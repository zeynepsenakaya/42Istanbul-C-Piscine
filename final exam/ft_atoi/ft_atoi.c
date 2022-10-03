int	ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;
	sign= 1;
	res = 0;
	i=0;
		while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
				i++;
		if(str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if(str[i] == '+')
		{
			i++;		
		}
		while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			res= (res*10) + (str[i] -48);
			i++;
		}
	return(res*sign);

}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("  	-123jsdh87923"));
}
