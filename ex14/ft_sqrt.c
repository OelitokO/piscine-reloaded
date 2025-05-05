/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 05:58:46 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/05 06:48:22 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d sayısın karesi : %d\n", 16, ft_sqrt(16));
	printf("%d sayısın karesi : %d\n", 25, ft_sqrt(25));
	printf("%d sayısın karesi : %d\n", 26, ft_sqrt(26));
	printf("%d sayısın karesi : %d\n", -3, ft_sqrt(-3));
}
