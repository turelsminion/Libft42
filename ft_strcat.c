/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:33:35 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/22 00:36:21 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int l_dest;

	i = 0;
	l_dest = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[i + l_dest] = s2[i];
		i++;
	}
	s1[i + l_dest] = '\0';
	return (s1);
}
