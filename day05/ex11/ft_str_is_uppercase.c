/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:08:22 by msegal            #+#    #+#             */
/*   Updated: 2020/01/14 17:11:13 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if  (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char hi[10] = "A123SD";
	printf("%d", ft_str_is_uppercase(hi));
}
