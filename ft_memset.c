/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 13:05:04 by ehollidg       #+#    #+#                */
/*   Updated: 2019/03/21 17:03:39 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *pt;

	pt = b;
	while (len > 0)
	{
		(*pt) = c;
		pt++;
		len--;
	}
	return (b);
}
