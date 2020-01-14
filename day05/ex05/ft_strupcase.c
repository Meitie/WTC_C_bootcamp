/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:25:04 by msegal            #+#    #+#             */
/*   Updated: 2020/01/14 14:49:56 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	char *upper_case;

	i = 0;
	upper_case = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			upper_case[i] = str[i] - 32;
		}
		i++;
	}
	return (upper_case);
}

int		main(void)
{
	char greetings[10] = "heLlO";
	printf("%s", ft_strupcase(greetings));
}
