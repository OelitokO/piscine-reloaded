/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:55:43 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/10 19:03:39 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len;

	len = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
	{
		return (NULL);
	}
	ft_strcpy(copy, s);
	return (copy);
}

int	main(void)
{
	char	*original;
	char	*clone;

	original = "Omer Orhan Elitok";
	clone = ft_strdup(original);
	if (clone)
	{
		printf("Kopyalanan: %s\n", clone);
		free(clone);
	}
	else
	{
		printf("Bellek Ayıramadı!\n");
	}
	return (0);
}
