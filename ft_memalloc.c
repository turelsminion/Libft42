/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 21:56:25 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/21 22:57:45 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if ((int)size < 1)
		return (NULL);
	ptr = (void *)malloc(sizeof(void) * size);
	if (ptr)
	{
		ft_bzero(ptr, size);
		return (ptr);
	}
	else
		return (NULL);
}
