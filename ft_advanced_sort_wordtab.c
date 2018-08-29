/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 01:00:34 by andmiron          #+#    #+#             */
/*   Updated: 2018/07/24 15:26:48 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*arr;

	i = 0;
	while (tab[++i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			arr = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = arr;
			i = 0;
		}
	}
}
