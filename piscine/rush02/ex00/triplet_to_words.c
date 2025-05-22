/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triplet_to_words.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:43:03 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 22:11:18 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

void	print_number_word(int number, t_dict *dict)
{
	char	*word;

	word = find_basic_word(number, dict);
	if (!word)
	{
		ft_putstr("Dict Error\n");
		exit(1);
	}
	ft_putstr(word);
}

void	print_hundreds(int num, t_dict *dict)
{
	int	hundreds;

	hundreds = num / 100;
	{
		print_number_word(hundreds, dict);
		ft_putstr(" ");
		print_number_word(100, dict);
		if (num % 100 != 0)
			ft_putstr(" ");
	}
}

void	print_tens_units(int num, t_dict *dict)
{
	int	tens;
	int	units;

	if (num >= 10 && num <= 19)
		print_number_word(num, dict);
	else
	{
		tens = num / 10;
		units = num % 10;
		if (tens)
		{
			print_number_word(tens * 10, dict);
			if (units)
				ft_putstr(" ");
		}
		if (units)
			print_number_word(units, dict);
	}
}

void	triplet_to_words(char *triplet, t_dict *dict)
{
	int	num;

	num = ft_atoi(triplet);
	if (num == 0)
		return ;
	print_hundreds(num, dict);
	print_tens_units(num % 100, dict);
}
