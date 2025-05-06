/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 02:25:36 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/06 04:16:47 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	int		fark;

	s1 = "Ömer Orhan Elitok";
	s2 = "Ömer Elitok";
	s3 = "Orhan Elitok";
	s4 = "Orhan Elitok";
	fark = ft_strcmp(s1, s2);
	printf("İki dizinin farkının ascii karşılığı: %d\n", fark);
	fark = ft_strcmp(s3, s4);
	if (fark == 0)
	{
		printf("İki dizi tamamen aynıdır");
	}
	else
	{
		printf("İki dizinin farkının ascii karşılığı: %d\n", fark);
	}
	return (0);
}
