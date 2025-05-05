/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 03:06:57 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/05 03:53:49 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("Swap işleminden önce\n  x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Swap işleminden sonra\n x = %d, y = %d\n", x, y);
}
