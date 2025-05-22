/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:56:33 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/11 10:36:43 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
	
	n < 0 ? write(1, "N", 1) : write(1, "P", 1);
}
/*
int	main()
{
	ft_is_negative(-10);
	ft_is_negative(0);
	ft_is_negative(10);
	return 0;
}*/
