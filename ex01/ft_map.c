/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 08:40:45 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/21 09:14:18 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*map;
	int	i;

	map = malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
