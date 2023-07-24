/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:09:57 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/24 11:45:22 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc_sorted;
	int	desc_sorted;

	i = 0;
	asc_sorted = 1;
	while (++i < length && asc_sorted)
		if (f(tab[i - 1], tab[i]) < 0)
			asc_sorted = 0;
	i = 0;
	desc_sorted = 1;
	while (++i < length && desc_sorted)
		if (f(tab[i - 1], tab[i]) > 0)
			desc_sorted = 0;
	return (asc_sorted || desc_sorted);
}
