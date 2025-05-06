/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 04:44:33 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/06 06:29:14 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	v;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			v = 0;
			while (argv[i][v])
			{
				write(1, &argv[i][v], 1);
				v++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
