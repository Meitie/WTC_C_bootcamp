/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:03:51 by msegal            #+#    #+#             */
/*   Updated: 2020/01/15 18:16:12 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	char *result;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (j != argc)
		{
			while (argc[j][i] != '\0')
			{
				if (argc[j + 1][i] != '\0')
				result =

			}			
			j++;
			i = 0;
		}
	}	
	return (0);	
}

int		main(void)
{
	
}
