/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:27:14 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 12:06:57 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	return (number * sign);
}

char	*skip_spaces(char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	check_line_valid(char *line)
{
	while (*line == ' ' || (*line >= 9 && *line <= 13))
		line++;
	if (*line < '0' || *line > '9')
		return (0);
	return (1);
}

void	free_dictionary(t_dict *dict)
{
	if (!dict)
		return ;
	if (dict->basic)
		free(dict->basic);
	if (dict->powers)
		free(dict->powers);
	if (dict->original_buffer)
		free(dict->original_buffer);
	dict->basic = NULL;
	dict->powers = NULL;
	dict->original_buffer = NULL;
	dict->basic_size = 0;
	dict->powers_size = 0;
}
