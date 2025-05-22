/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:57:36 by kamelina          #+#    #+#             */
/*   Updated: 2025/04/27 22:29:10 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers_to_words.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}

char	*open_and_read(char *filename)
{
	int		fd;
	char	*dictbuffer;
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	dictbuffer = malloc(4096);
	if (!dictbuffer)
		return (NULL);
	ft_bzero(dictbuffer, 4096);
	bytes_read = read(fd, dictbuffer, 4095);
	if (bytes_read <= 0)
	{
		free(dictbuffer);
		close(fd);
		return (NULL);
	}
	dictbuffer[bytes_read] = '\0';
	if (close(fd) == -1)
	{
		free(dictbuffer);
		return (NULL);
	}
	return (dictbuffer);
}

void	print_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

char	*read_dict(char *filename)
{
	char	*buffer;

	buffer = open_and_read(filename);
	if (!buffer)
	{
		print_dict_error();
		return (NULL);
	}
	return (buffer);
}
