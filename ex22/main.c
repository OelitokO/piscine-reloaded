/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:14:57 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/11 16:52:32 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = -5;
	b = 0;
	c = 42;
	printf("ABS(%d) = %d\n", a, ABS(a));
	printf("ABS(%d) = %d\n", b, ABS(b));
	printf("ABS(%d) = %d\n", c, ABS(c));
	printf("ABS(%d + %d) = %d\n", a, c, ABS(a + c));
}
