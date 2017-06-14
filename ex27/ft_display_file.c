/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 03:40:32 by rlecart           #+#    #+#             */
/*   Updated: 2016/11/24 12:53:33 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_display_file(char *str)
{
	int		fd;
	char	rd[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ERREUR open()");
		return (1);
	}
	else
	{
		read(fd, rd, BUF_SIZE);
		ft_putstr(rd);
	}
	if (close(fd) == -1)
	{
		ft_putstr("ERREUR close()");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
		ft_display_file(argv[1]);
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
