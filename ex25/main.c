/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:29:10 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/18 19:00:35 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_stars(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
	int	dizi[] = {3, 5, 7, 9, 11};

	ft_foreach(dizi, 5, print_stars);
	return (0);
}
