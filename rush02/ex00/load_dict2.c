/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dict2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:19:13 by kamelina          #+#    #+#             */
/*   Updated: 2025/04/27 17:19:17 by kamelina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int	count_lines(char *str)
{
	int	lines_count;
	int	i;

	lines_count = 1;
	i = 0;
	while (str[i])
		if (str[i++] == '\n')
			lines_count++;
	return (lines_count);
}

void	fill_lines_array(char *str, char **lines)
{
	int	i;
	int	lines_count;

	i = 0;
	lines[0] = str;
	lines_count = 1;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			lines[lines_count++] = str + i + 1;
		}
		i++;
	}
	lines[lines_count] = 0;
}

char	**split_by_newline(char *str)
{
	int		lines_count;
	char	**lines;

	lines_count = count_lines(str);
	lines = malloc(sizeof(char *) * (lines_count + 1));
	if (!lines)
		return (0);
	fill_lines_array(str, lines);
	return (lines);
}

void	free_split(char **lines)
{
	free(lines);
}

int	alloc_dict_entries(t_dict *dict, int basic_count, int powers_count)
{
	(*dict).basic = malloc(sizeof(t_entry) * basic_count);
	(*dict).powers = malloc(sizeof(t_entry) * powers_count);
	if (!(*dict).basic || !(*dict).powers)
		return (0);
	return (1);
}
