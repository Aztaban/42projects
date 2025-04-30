/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhagara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:21:34 by mhagara           #+#    #+#             */
/*   Updated: 2025/04/13 18:21:36 by mhagara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && row == 1)
				|| (col == x && row == y && x > 1 && y > 1))
				ft_putchar('/');
			else if ((col == 1 && row == y) || (col == x && row == 1))
				ft_putchar('\\');
			else if (row == 1 || row == y || col == x || col == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
