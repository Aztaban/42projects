/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:01:04 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/27 22:00:19 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2 || argc == 3)
	{
		if (!is_valid_number(argv[1]))
		{
			ft_putstr("Error\n");
			return (1);
		}
		if (argc == 2)
			return (process(argv[1], "numbers.dict"));
		else
			return (process(argv[1], argv[2]));
	}
	ft_putstr("Error\n");
	return (1);
}
