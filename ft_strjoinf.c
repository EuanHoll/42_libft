/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoinf.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 13:29:53 by ehollidg       #+#    #+#                */
/*   Updated: 2019/04/05 13:40:52 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinf(char *s1, char const *s2)
{
	char *s3;

	s3 = ft_strjoin(s1, s2);
	free(s1);
	return (s3);
}
