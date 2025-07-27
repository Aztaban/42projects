/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:44:15 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/30 16:23:13 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_base(char *base);

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

static	int	ft_nbrlen(long nbr, int base_value)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= base_value;
		len++;
	}
	return (len);
}

static	void	ft_fill_result(char *res, long nbr, char *base, int i)
{
	int	base_value;

	base_value = count_base(base);
	while (nbr >= base_value)
	{
		res[--i] = base[nbr % base_value];
		nbr /= base_value;
	}
	res[--i] = base[nbr];
}

char	*handle_zero(char *base)
{
	char	*res;

	res = (char *)malloc(2 * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = base[0];
	res[1] = '\0';
	return (res);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_value;
	int		len;
	long	lnbr;
	char	*res;

	base_value = count_base(base);
	if (base_value == 0)
		return (NULL);
	lnbr = nbr;
	if (lnbr == 0)
		return (handle_zero(base));
	len = ft_nbrlen(lnbr, base_value);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (lnbr < 0)
	{
		res[0] = '-';
		lnbr = -lnbr;
	}
	ft_fill_result(res, lnbr, base, len);
	return (res);
}
