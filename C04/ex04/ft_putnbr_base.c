/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:20:32 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/20 11:21:07 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	count_base(char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return (0);
		base_value++;
	}
	if (base_value < 2)
		return (0);
	if (double_char(base))
		return (0);
	return (base_value);
}

void	print_nbr(int nbr, int base_value, char *base)
{
	long	lnbr;

	lnbr = nbr;
	if (lnbr < 0)
	{
		lnbr = -lnbr;
		ft_putchar('-');
	}
	if (lnbr >= base_value)
		print_nbr(lnbr / base_value, base_value, base);
	ft_putchar(base[lnbr % base_value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = count_base(base);
	if (base_value)
		print_nbr(nbr, base_value, base);
}
/*
int	main(int argc, char **argv)
{
	int		n;
	char	*baseSymbols;
	
	if (argc > 3)
		return (0);
	n = ft_atoi(argv[1]);
	baseSymbols = argv[2];

	ft_putnbr_base(n, baseSymbols);
	return (0);
}*/
