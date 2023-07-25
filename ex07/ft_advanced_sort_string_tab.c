/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:57:40 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/25 14:15:50 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	if (!tab[0])
		return ;
	i = 1;
	while (tab[i])
	{
		j = i - 1;
		while (j >= 0 && cmp(tab[j], tab[j + 1]) > 0)
		{
			ft_swap(&tab[j], &tab[j + 1]);
			j--;
		}
		i++;
	}
}
