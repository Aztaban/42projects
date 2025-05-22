/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:27:14 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 21:50:14 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int	val_ext_digits(char *start, char **digit_end, int *digit_count)
{
	*digit_end = start;
	while (**digit_end >= '0' && **digit_end <= '9')
		(*digit_end)++;
	*digit_count = *digit_end - start;
	while (**digit_end == ' ' || (**digit_end >= 9 && **digit_end <= 13))
		(*digit_end)++;
	return (**digit_end == ':');
}

int	parse_line(char *line, int *num_or_pow, char **word, int *is_power)
{
	char	*start;
	char	*digit_end;
	int		digit_count;

	if (!line || *line == '\0')
		return (1);
	start = skip_spaces(line);
	if (*start < '0' || *start > '9')
		return (0);
	if (!val_ext_digits(start, &digit_end, &digit_count))
		return (0);
	*is_power = (digit_count > 3);
	if (*is_power)
		*num_or_pow = (digit_count - 1) / 3;
	else
		*num_or_pow = ft_atoi(start);
	digit_end++;
	*word = skip_spaces(digit_end);
	return (**word != '\0');
}
