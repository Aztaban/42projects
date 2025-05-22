/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:28:08 by mjusta            #+#    #+#             */
/*   Updated: 2025/04/30 12:40:16 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_joinlen(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	i = 0;
	total_len = 1;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	if (size < 0)
		return (NULL);
	if (size == 0)
		result = malloc(1);
	else
		result = (char *)malloc(ft_joinlen(size, strs, sep));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = ft_strjoin(--argc, ++argv, "__");
		if (str)
		{
			printf("%s\n", str);
			free(str);
		}
		else
			printf("Memory allocation failed.\n");
	}
	else
	{
		str = ft_strjoin(0, NULL, "__");
		if (str)
		{
			printf("Empty result: \"%s\"", str);
			free(str);
		}
	}
	return (0);
}*/
