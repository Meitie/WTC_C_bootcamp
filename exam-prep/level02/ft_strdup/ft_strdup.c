/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:01:41 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 14:26:20 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		i = 0;
	int		k = 0;
	char	*dest;

	while (src[i] != '\0')
		i++;
	dest = (char*) malloc(sizeof(char) * (i + 1));
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	desk[k] = '\0';
	return (dest);
}
