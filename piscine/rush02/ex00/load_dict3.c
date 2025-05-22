/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dict3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:19:13 by kamelina          #+#    #+#             */
/*   Updated: 2025/04/27 22:49:52 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int		fill(char **lines, t_dict *dict);
char	**split_by_newline(char *str);
void	free_split(char **lines);

int	load_dictionary(char *filename, t_dict *dict)
{
	char	*content;
	char	**lines;
	int		basic_count;
	int		powers_count;

	content = read_dict(filename);
	if (!content)
		return (0);
	lines = split_by_newline(content);
	if (!lines)
		return (free(content), print_dict_error(), 0);
	if (!count(lines, &basic_count, &powers_count)
		|| basic_count == 0 || powers_count == 0)
		return (free(content), free_split(lines), print_dict_error(), 0);
	if (!alloc_dict_entries(dict, basic_count, powers_count))
		return (free(content), free_split(lines), print_dict_error(), 0);
	(*dict).original_buffer = content;
	(*dict).basic_size = basic_count;
	(*dict).powers_size = powers_count;
	if (!fill(lines, dict))
		return (free(content), free_split(lines), free((*dict).basic),
			free((*dict).powers), print_dict_error(), 0);
	free_split(lines);
	return (1);
}
