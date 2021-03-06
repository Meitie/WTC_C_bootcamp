/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 12:21:06 by msegal            #+#    #+#             */
/*   Updated: 2020/01/14 12:50:25 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || i < (int) n)
	{
		if (s1[i] == s2[i])
		{
			if ((s2[i] == '\0' && s1[i] == '\0') || i > (int) n)
				return (0);
			i++;
		}
		else 
			return (s1[i] - s2[i]);
	}
	return (s1[i] == s2[i]);
}
