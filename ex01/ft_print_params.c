/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:11:14 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/14 00:29:36 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	y;

	y = 1;
	while (argc > y)
	{
		i = 0;
		while (argv[y][i] != '\0')
		{
			write(1, &argv[y][i], 1);
			i++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (0);
}
