/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 11:28:50 by ehollidg       #+#    #+#                */
/*   Updated: 2019/04/05 11:33:36 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_realloc(void *str, size_t len)
{
	void *s1;

	if (!str || len == 0)
		return (NULL);
	s1 = ft_memalloc(sizeof(void) * len);
	if (sizeof(void) * len > sizeof(str))
		ft_memcpy(s1, str, sizeof(str) / sizeof(void));
	else
		ft_memcpy(s1, str, len);
	free(str);
	return (s1);
}
