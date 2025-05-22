/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:15:01 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 23:23:12 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"
#include <stdio.h>

int	process(char *number_str, char *dict_name)
{
	t_dict	dict;
	char	**triplets;
	int		triplet_count;	

	if (!load_dictionary(dict_name, &dict) != 0)
		return (1);
	triplets = split_into_triplets(number_str, &triplet_count);
	if (!triplets)
	{
		free_dictionary(&dict);
		return (1);
	}
	build_text(triplets, triplet_count, &dict);
	free_triplets(triplets, triplet_count);
	free_dictionary(&dict);
	return (0);
}
