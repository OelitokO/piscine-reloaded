/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:52:39 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/05 01:55:41 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	n;

	n = 0;
	while (n <= 9)
	{
		write(1, &n, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
