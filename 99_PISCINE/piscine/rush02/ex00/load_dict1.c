/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dict1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:19:13 by kamelina          #+#    #+#             */
/*   Updated: 2025/04/27 17:19:17 by kamelina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int	count(char **lines, int *basic_count, int *powers)
{
	int		i;
	int		n;
	int		is_power;
	char	*word;

	i = 0;
	*basic_count = 0;
	*powers = 0;
	while (lines[i])
	{
		if (lines[i][0] != '\0')
		{
			if (!parse_line(lines[i], &n, &word, &is_power))
				return (0);
			if (is_power)
				(*powers)++;
			else
				(*basic_count)++;
		}
		i++;
	}
	return (1);
}

int	add_entry(char *line, t_dict *dict, int *basic_idx, int *power_idx)
{
	int		num;
	int		is_power;
	char	*word;
	t_entry	entry;

	if (!parse_line(line, &num, &word, &is_power))
		return (0);
	entry = (t_entry){num, word};
	if (is_power)
		(*dict).powers[(*power_idx)++] = entry;
	else
		(*dict).basic[(*basic_idx)++] = entry;
	return (1);
}

int	fill(char **lines, t_dict *dict)
{
	int		i;
	int		basic_idx;
	int		power_idx;

	i = 0;
	basic_idx = 0;
	power_idx = 0;
	while (lines[i])
	{
		if (lines[i][0] != '\0')
		{
			if (!add_entry(lines[i], dict, &basic_idx, &power_idx))
				return (0);
		}
		i++;
	}
	return (1);
}
