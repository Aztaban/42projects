/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjusta <mjusta@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:42:51 by mjusta            #+#    #+#             */
/*   Updated: 2025/05/20 17:20:05 by mjusta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes_read;
	char	buffer[4096];

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("Cannot read file.\n");
			return (1);
		}
		bytes_read = read(fd, buffer, 4096);
		while (bytes_read > 0)
		{
			write(1, buffer, bytes_read);
			bytes_read = read(fd, buffer, 4096);
		}
		close(fd);
	}
	return (0);
}
