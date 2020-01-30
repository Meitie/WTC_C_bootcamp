/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:24:00 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 11:59:29 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}

int main(int ac, char **av)
{
	if (ac != 3)
		printf("need 3");
	else
	{
		char *s1 = av[1];
		char *s2 = av[2];

		printf("%d\n", ft_strcmp(s1, s2));
		printf("%d\n", strcmp(s1, s2));
	}
}
