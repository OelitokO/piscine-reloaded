/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:51:33 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/10 20:42:25 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	len = max - min;
	if (len <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * len);
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int	main(void)
{
	int	min;
	int	max;
	int	len;
	int	i;
	int	*range;

	min = 4;
	max = 10;
	len = max - min;
	range = ft_range(min, max);
	if (range)
	{
		i = 0;
		while (i < len)
		{
			printf("%d ", range[i]);
			i++;
		}
		free(range);
	}
	else
	{
		printf("Bellek ayıramadı\n");
	}
	return (0);
}
