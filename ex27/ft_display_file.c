/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:55:22 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/20 18:31:49 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	disp_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
	{
		write(1, &buffer, 1);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
		{
			write(2, "Too many arguments.\n", 20);
		}
		else
		{
			write(2, "File name missing.\n", 19);
		}
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	disp_file(fd);
	close(fd);
	return (0);
}
