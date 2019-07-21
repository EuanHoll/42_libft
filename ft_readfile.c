/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_readfile.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/07/21 16:10:42 by ehollidg       #+#    #+#                */
/*   Updated: 2019/07/21 17:32:20 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char *join(char *s1, char *s2, size_t s1len, size_t s2len)
{
    char			*str;

	if (s2 == NULL)
		return (NULL);
    if (s1 == NULL)
        return (ft_memdup(s2, s2len));
	str = ft_strnew(s1len + s2len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, s1len);
	ft_memcpy(&str[s1len], s2, s2len);
	return (str);

}

char    *ft_readfile(int id)
{
    char    *str;
    char    *str1;
    size_t  len;
    char    temp[BUFF_SIZE + 1];
    int     r;

    str = NULL;
    if (read(id, &str, 0) < 0)
        return (str);
    len = 0;
    ft_bzero(temp, BUFF_SIZE + 1);
    r = 1;
    while (r > 0)
    {
        r = read(id, &temp, BUFF_SIZE);
        str1 = join(str, temp, len, (size_t)r);
        free(str);
        ft_bzero(temp, BUFF_SIZE + 1);
        str = str1;
        len += r;
    }
    return (str);
}
