/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:36:46 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/22 00:39:27 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	int		l_dest;

	i = 0;
	l_dest = ft_strlen(s1);
	while (s2[i] != '\0' && n > 0)
	{
		s1[i + l_dest] = s2[i];
		i++;
		n--;
	}
	s1[i + l_dest] = '\0';
	return (s1);
}
