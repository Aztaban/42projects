/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:27:44 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/19 15:24:02 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
int 	main(void)
{
	ft_putnbr(42);        
	ft_putchar('\n');
	ft_putnbr(-12345);    
	ft_putchar('\n');
	ft_putnbr(0);         
	ft_putchar('\n');
	ft_putnbr(-2147483648); 
	ft_putchar('\n');
	ft_putnbr(2147483647);  
	ft_putchar('\n');
	return 0;
}*/
