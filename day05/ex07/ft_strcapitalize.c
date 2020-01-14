/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:03:36 by msegal            #+#    #+#             */
/*   Updated: 2020/01/14 16:13:27 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*cap_let;

	i = 0;
	cap_let = str;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			cap_let[i] = str[i] - 32;
		if (str[i - 1] == 32 && (str[i] >= 97 && str[i] <= 122))
			cap_let[i] = str[i] - 32;
		i++;
	}
	return (cap_let);
}

int	main(void)
{
	char	greet[20] = "I am 9 years old";
	printf("%s", ft_strcapitalize(greet));
}
