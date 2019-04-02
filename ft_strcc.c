/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcc.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 17:47:56 by ehollidg       #+#    #+#                */
/*   Updated: 2019/03/29 13:06:42 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcc(char *s, char c)
{
	int i;
	int j;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		(i != 0 && s[i] == c) ? j++ : 0;
		i++;
	}
	return (j);
}
