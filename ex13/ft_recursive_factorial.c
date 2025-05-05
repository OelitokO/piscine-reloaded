/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 05:17:46 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/05 06:29:20 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial (nb -1));
}

int	main(void)
{
	int	num;
	int	result;

	printf("Bir sayı giriniz.. ");
	scanf("%d", &num);
	result = ft_recursive_factorial(num);
	printf("%d! = %d\n", num, result);
	return (0);
}
