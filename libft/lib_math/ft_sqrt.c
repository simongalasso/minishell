/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 21:22:31 by sgalasso          #+#    #+#             */
/*   Updated: 2018/04/06 21:24:18 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i <= nb)
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
