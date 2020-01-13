/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:25:39 by msegal            #+#    #+#             */
/*   Updated: 2020/01/13 21:18:38 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	i = 0;

 	 if (!to_find[0])
		return (str);

	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			x = 1;
			while (str[i + x] == to_find[x])
				i++;
			if (to_find[x] == '\0')
				return (str +i);
		}
		x++;
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s", ft_strstr("hello world", "w"));
	return (0);
}
