/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:34:22 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 22:43:40 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

void	free_triplets(char **triplets, int triplet_count)
{
	int	i;

	i = 0;
	while (i < triplet_count)
	{
		free(triplets[i]);
		i++;
	}
	free(triplets);
}
