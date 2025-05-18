/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OelitokO <omerelitok.05@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:09:06 by OelitokO          #+#    #+#             */
/*   Updated: 2025/05/18 20:25:29 by OelitokO         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_empty(char *str)
{
	return (str[0] == '\0');
}

int	ft_count_if(char **tab, int (*f)(char *));

int	main(void)
{
	int		result;
	char	*arr[] = {"Hello", "", "42", "", "Omer", NULL};

	result = ft_count_if(arr, is_empty);
	printf("Boş string sayısı: %d\n", result);
	return (0);
}
