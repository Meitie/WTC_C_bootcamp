/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:56:31 by msegal            #+#    #+#             */
/*   Updated: 2020/01/14 15:00:02 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	*lower_case;

	i = 0;
	lower_case = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			lower_case[i] = str[i] + 32;
		i++;
	}
	return(lower_case);
}

int		main(void)
{
	char low_case[10] = "heLLo";
	printf("%s", ft_strlowcase(low_case));
}
