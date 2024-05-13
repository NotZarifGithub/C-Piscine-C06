/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:29:38 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/13 15:09:16 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	
	i = 0;
	while (argv[0][i] != '\0' && argc != 0)
	{
		write(1, &argv[0][i], 1);
		i++;
	}	
	write(1, "\n", 1);
	return (0);
}
