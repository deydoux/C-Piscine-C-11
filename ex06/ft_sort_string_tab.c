/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:38:59 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/24 15:47:29 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	if (!tab[0])
		return ;
	i = 1;
	while (tab[i])
	{
		j = i - 1;
		while (j >= 0 && ft_strcmp(tab[j], tab[j + 1]) > 0)
		{
			ft_swap(&tab[j], &tab[j + 1]);
			j--;
		}
		i++;
	}
}
