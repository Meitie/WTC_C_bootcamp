/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 08:22:26 by msegal            #+#    #+#             */
/*   Updated: 2020/01/13 12:46:26 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char name_1[100] = "ben";
	char name_2[100] = "Johannes Strenburgenstien";

	ft_strcpy(name_2, name_1);
	printf("%s, %s", name_2, name_1);
	return (0);
}
