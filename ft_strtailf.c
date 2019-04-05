/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtailf.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 11:53:28 by ehollidg       #+#    #+#                */
/*   Updated: 2019/04/05 11:55:53 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtailf(char *str, size_t i)
{
	char *s1;

	s1 = ft_strtail(str, i);
	free(str);
	str = NULL;
	return (s1);
}