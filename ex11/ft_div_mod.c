/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 03:20:21 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/05 03:48:16 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

int	main(void)

{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 20;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("Bölüm: %d\nKalan %d\n", div, mod);
}
