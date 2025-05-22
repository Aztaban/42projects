/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:49:24 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/23 20:18:14 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int *range;
	int size;
	int i = 0;

	size = ft_ultimate_range(&range, 13, 8);
	if (size == -1)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}	
	else if (size == 0)
	{
		printf("Invalid range.");
		return (0);
	}
	printf("Size is: %d\n", size);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return 0;
}*/
