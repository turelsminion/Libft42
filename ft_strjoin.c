/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmiron <andmiron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 10:16:55 by andmiron          #+#    #+#             */
/*   Updated: 2018/08/24 10:37:41 by andmiron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		str = (char *)malloc(sizeof(char) * len);
		if (str)
		{
			str = ft_strcpy(str, s1);
			i = ft_strlen(s1);
			j = 0;
			while (i < len)
			{
				str[i] = s2[j];
				i++;
				j++;
			}
			return (str);
		}
	}
	return (str);
}
