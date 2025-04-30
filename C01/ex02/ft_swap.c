/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:19:33 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/12 10:43:37 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	first;
	int	second;

	first = 10;
	second = 25;

	ft_swap(&first, &second);
	printf("first = %d\n", first);
	printf("second = %d\n", second);
	
	return 0;
}*/
