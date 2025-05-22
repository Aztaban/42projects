/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:04:42 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/13 15:03:16 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{	
	int i = 0;
	int arr[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(arr, 5);
	printf("Array is: ");
	while (i < 5)
	{
		printf("%d, ", arr[i]);
		i++;  
	}	
	return 0;
}*/
