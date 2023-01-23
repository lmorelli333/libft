/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:23:10 by lmorelli          #+#    #+#             */
/*   Updated: 2023/01/23 18:00:02 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	if (size == 0 || (!src && !dest))
		return (0);
	i = 0;
	j = 0;
	while (dest[j] && j < size)
		j++;
	dl = j;
	sl = ft_strlen(src);
	while (src[i] && size > (i + dl + 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (dl != size)
		dest[j] = '\0';
	return (dl + sl);
}
