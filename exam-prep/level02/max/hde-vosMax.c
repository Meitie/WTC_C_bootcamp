/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hde-vosMax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:06:18 by msegal            #+#    #+#             */
/*   Updated: 2020/01/27 20:26:54 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, int len)
{
	int i;
	int biggest;

	if (!tab)
		return (0);
	i = 0;
	biggest = 0;
	while (i < len && tab[i])
	{
		if (biggest < tab[i])
			biggest = tab[i];
		i++;
	}
	return (biggest);
}

int main(void)
{
	int *tab2;
	int tab[6] = {1, 2, 3, 4, 5, 6};
	max(tab2, 1234123554);
	printf("biggest: %d\n", max(tab2, 6));
}
