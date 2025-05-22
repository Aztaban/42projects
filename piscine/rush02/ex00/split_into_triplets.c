/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_into_triplets.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakunevy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:20:50 by aakunevy          #+#    #+#             */
/*   Updated: 2025/04/27 22:17:45 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int		nums_in_str(char *number_str);

int		str_length(char *number_str);

int		count_tris(int nums_instr);

void	fill_tris(char **triplets, char *num_str,
			int str_len, int nums_instr);

void	clear_triplets(char **triplets, int up_to)
{
	int	i;

	i = 0;
	while (i < up_to)
	{
		free(triplets[i]);
		i++;
	}
	free(triplets);
}

char	**allocate_triplets(int tri_nums)
{
	char	**triplets;
	int		i;

	triplets = malloc(tri_nums * sizeof(char *));
	if (!triplets)
		return (NULL);
	i = 0;
	while (i < tri_nums)
	{
		triplets[i] = malloc(4 * sizeof(char));
		if (!triplets[i])
		{
			clear_triplets(triplets, i);
			return (NULL);
		}
		i++;
	}
	return (triplets);
}

char	**split_into_triplets(char *num_str, int *tri_count)
{
	char	**triplets;
	int		tri_nums;
	int		str_len;
	int		nums_instr;

	str_len = str_length(num_str);
	nums_instr = nums_in_str(num_str);
	tri_nums = count_tris(nums_instr);
	*tri_count = tri_nums;
	triplets = allocate_triplets(tri_nums);
	if (!triplets)
		return (NULL);
	fill_tris(triplets, num_str, str_len, nums_instr);
	return (triplets);
}
