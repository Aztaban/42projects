/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_triples.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakunevy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:10:51 by aakunevy          #+#    #+#             */
/*   Updated: 2025/04/27 22:15:42 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int	nums_in_str(char *number_str)
{
	int	count_nums;
	int	zeros;
	int	i;

	count_nums = 0;
	zeros = 0;
	i = 0;
	while (number_str[i] == '0' && number_str[i])
	{
		zeros++;
		i++;
	}
	while (number_str[i])
	{
		count_nums++;
		i++;
	}
	if (zeros > 0 && count_nums == 0)
		return (0);
	return (count_nums);
}

int	str_length(char *number_str)
{
	int	i;

	i = 0;
	while (number_str[i])
	{
		i++;
	}
	return (i);
}

int	count_tris(int nums_instr)
{
	if (nums_instr % 3 == 0)
		return (nums_instr / 3);
	return (nums_instr / 3 + 1);
}

void	fill_tris(char **triplets, char *num_str,
		int str_len, int nums_instr)
{
	int	i;
	int	j;
	int	tri_nums;

	tri_nums = count_tris(nums_instr);
	i = 0;
	while (i < tri_nums)
	{
		j = 2;
		while (j >= 0)
		{
			if (nums_instr > 0)
			{
				triplets[i][j] = num_str[--str_len];
				nums_instr--;
			}
			else
				triplets[i][j] = '0';
			j--;
		}
		triplets[i][3] = '\0';
		i++;
	}
}
