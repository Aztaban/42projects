/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_text.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:57:34 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 23:35:06 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

static	int	is_zero_triplet(char *triplet)
{
	int	i;

	i = 0;
	while (triplet[i])
	{
		if (triplet[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

static	void	print_power(int index, t_dict *dict)
{
	char	*power_word;

	if (index <= 0)
		return ;
	power_word = find_power_word(index, dict);
	if (!power_word)
	{
		ft_putstr("Dict Error\n");
		exit (1);
	}
	ft_putstr(" ");
	ft_putstr(power_word);
}

static	void	print_zero(t_dict *dict)
{
	char	*zero_word;

	zero_word = find_basic_word(0, dict);
	if (!zero_word)
	{
		ft_putstr("Dict Error\n");
		exit(1);
	}
	ft_putstr(zero_word);
}

void	build_text(char **triplets, int triplet_count, t_dict *dict)
{
	int	i;
	int	first_nonzero;

	i = triplet_count - 1;
	first_nonzero = 0;
	while (i >= 0)
	{
		if (!is_zero_triplet(triplets[i]))
		{
			if (first_nonzero)
				ft_putstr(" ");
			triplet_to_words(triplets[i], dict);
			print_power(i, dict);
			first_nonzero = 1;
		}
		i--;
	}
	if (!first_nonzero)
		print_zero(dict);
}
