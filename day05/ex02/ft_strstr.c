/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:25:39 by msegal            #+#    #+#             */
/*   Updated: 2020/01/13 22:09:21 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	i = 0;
 	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{	
			if (to_find[x + 1] == '\0')
				return (&str[i]);
			x++;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s", ft_strstr("hello there world", "there"));
}
