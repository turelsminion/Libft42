/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 21:26:37 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/18 13:26:47 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t cnt)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcs;

	srcs = (unsigned char *)src;
	dest = (unsigned char *)dst;
	dst = dest;
	i = 0;
	while (i < cnt)
	{
		dest[i] = srcs[i];
		if (srcs[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
