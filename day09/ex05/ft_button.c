/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:03:00 by msegal            #+#    #+#             */
/*   Updated: 2020/01/16 15:37:01 by msegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_simp(int i, int j, int k)
{
	if (i <= j && j <= k)
		return (j);
	else if (j <= i && i <= k)
		return (i);
	else if (i <= k && k <= j)
		return (k);
	return (0);
}

int		ft_button(int i, int j, int k)
{
	ft_simp(i, j, k);
	if (i < j && i < k)
	{
		if (j < k)
			return (j);
		else if (k < j)
			return (k);
	}
	else if (j < i && j < k)
	{
		if (i < k)
			return (i);
		else if (k < i)
			return (k);
	}
	else if (k < i && k < j)
	{
		if (i < j)
			return (i);
		else if (j < i)
			return (j);
	}
	return (0);
}
