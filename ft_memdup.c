/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/21 17:24:53 by ehollidg       #+#    #+#                */
/*   Updated: 2019/07/21 17:26:21 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memdup(void *src, size_t n)
{
    void *dst;

    dst = ft_memalloc(sizeof(src) * n);
    ft_memcpy(dst, src, n);
    return (dst);
}