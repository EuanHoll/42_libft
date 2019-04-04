/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 18:00:20 by ehollidg       #+#    #+#                */
/*   Updated: 2019/03/29 18:06:24 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pt1;
	const char	*pt2;
	int			i;

	pt1 = (char *)dst;
	pt2 = (const char *)src;
	i = 0;
	while (i < (int)n)
	{
		pt1[i] = pt2[i];
		i++;
	}
	return (dst);
}