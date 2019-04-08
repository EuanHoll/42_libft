/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 11:28:50 by ehollidg       #+#    #+#                */
/*   Updated: 2019/04/08 19:48:08 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_realloc(void *src, size_t len)
{
	char *s1;

	if (!src || len == 0)
		return (NULL);
	s1 = ft_memalloc(sizeof(char) * len);
	ft_memcpy(s1, src, len);
	ft_memdel(&src);
	return ((void*)s1);
}
