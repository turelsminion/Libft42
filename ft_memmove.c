/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 10:59:17 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/18 15:09:26 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcs;
	unsigned char	*dest;

	srcs = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = -1;
	if (srcs < dest)
		while ((int)(--n) >= 0)
			*(dest + n) = *(srcs + n);
	else
		while (++i < n)
			*(dest + i) = *(srcs + i);
	return (dst);
}
