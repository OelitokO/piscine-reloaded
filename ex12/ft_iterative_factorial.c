/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 04:09:55 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/05 04:20:42 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)

{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	printf("!5 için: %d\n", ft_iterative_factorial(5));
	printf("!0 için: %d\n", ft_iterative_factorial(0));
	printf("-!3 için: %d\n", ft_iterative_factorial(-3));
}
