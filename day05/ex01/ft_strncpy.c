/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:29:20 by msegal            #+#    #+#             */
/*   Updated: 2020/01/13 14:04:03 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char name_1[50] = "exiting";
	char name_2[50] = "welcome to JHB";
	int position;
	
	position = 7;
	ft_strncpy(name_1, name_2, position);
	printf("%s, %s", name_1, name_2);
	return (0);
}
