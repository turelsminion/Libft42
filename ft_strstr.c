/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:55:20 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/22 01:26:01 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	n;

	if (big[0] == '\0' && little[0] == '\0')
		return ((char *)big);
	n = ft_strlen(little);
	while (*big)
		if (!ft_memcmp(big++, little, n))
			return ((char *)big - 1);
	return (0);
}
