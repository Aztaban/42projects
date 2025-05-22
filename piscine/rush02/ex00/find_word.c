/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:00:29 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 23:37:51 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

char	*find_word_in_entries(int number, t_entry *entries, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (entries[i].number == number)
			return (entries[i].str);
		i++;
	}
	return (NULL);
}

char	*find_basic_word(int number, t_dict *dict)
{
	return (find_word_in_entries(number, dict->basic, dict->basic_size));
}

char	*find_power_word(int number, t_dict *dict)
{
	return (find_word_in_entries(number, dict->powers, dict->powers_size));
}
