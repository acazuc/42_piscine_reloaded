/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 17:02:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 17:13:19 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	char	c;
	int		fd;

	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (ac != 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &c, 1) == 1)
		write(1, &c, 1);
	close(fd);
	return (0);
}
