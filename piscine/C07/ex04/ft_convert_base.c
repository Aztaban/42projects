/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:49:34 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/30 16:27:25 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		double_char(char *base);
char	*ft_itoa_base(int value, char *base);

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

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	parse_number(char *str, char *base, int base_len)
{
	int	sign;
	int	result;
	int	index;

	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	result = 0;
	index = is_in_base(*str, base);
	while (index != -1)
	{
		result = result * base_len + index;
		str++;
		index = is_in_base(*str, base);
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;

	base_len = count_base(base);
	if (base_len == 0)
		return (0);
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	return (parse_number(str, base, base_len));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!count_base(base_from) || !count_base(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(number, base_to);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}*/
