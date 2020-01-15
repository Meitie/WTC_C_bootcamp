/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:42:15 by msegal            #+#    #+#             */
/*   Updated: 2020/01/15 13:20:37 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (*src)
	{
		while (src[j] != '\0')
			j++;
	}
	if (!(tmp = (char *)malloc(j * sizeof(char))))
		return (NULL);
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		write(1, &tmp[i], 1);
		i++;
	}
	printf("\n");
	return (tmp);
}

int		main(void)
{
	char	a[30] = "hello how you";
	char	*tmp;

	tmp = ft_strdup(a);
	free(tmp);
	return (0);
}
