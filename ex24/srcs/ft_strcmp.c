/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 22:07:54 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/17 22:11:58 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] && s1[c] == s2[c])
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
