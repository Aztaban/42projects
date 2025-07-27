/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:41:21 by mjusta            #+#    #+#             */
/*   Updated: 2025/05/20 17:45:45 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
		ft_putchar(a++);
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
