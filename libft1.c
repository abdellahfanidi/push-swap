#include "push_swap.h"
void    ft_putstr(char *str)
{
    int i;

    if (str == NULL)
        return ;
    i = 0;
    while(str[i])
        write(1,&str[i++],1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r' ) || c == ' ' )
		return (1);
	return (0);
}

long	ft_atoi(const char *p,int *check)
{
	int	signe;
	long	res;

	res = 0;
	signe = 1;
	*check = 0;
	while (ft_isspace(*p))
		p++;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			signe = -1;
		p++;
	}
	if (!ft_isdigit(*p))
	{
		*check = 1;
		printf("aywa");
		return(0);
	}
	while (ft_isdigit(*p))
	{
		res = (10 * res) + *p - '0';
		p++;
	}
	if (*p != NULL)
	{
		*check = 1;
		return(0);
	}
	return (res * signe);
}

void	put(char *p, int i)
{
	i--;
	while (i >= 0)
	{
		write(1, &p[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	ch[50];
	long	n;

	n = nb;
	i = 0;
	if (n == 0)
		write(1, "0", 1);
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	while (n != 0)
	{
		ch[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	put(ch, i);
}
