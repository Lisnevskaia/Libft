/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:54:23 by ccred             #+#    #+#             */
/*   Updated: 2019/11/14 14:05:00 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **word, size_t i)
{
	while (i--)
		ft_strdel(&(word[i]));
	free(word);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	**res;

	x = 0;
	z = 0;
	if (!s || !(res = (char**)malloc(sizeof(char*) * ft_wcounter(s, c) + 1)))
		return (NULL);
	while (x < ft_wcounter(s, c))
	{
		while (s[z] == c)
			z++;
		y = ft_wlen(&s[z], c);
		if (!(res[x] = ft_strsub(&s[z], 0, y)))
		{
			ft_free(res, x);
			return (NULL);
		}
		z = z + y;
		x++;
	}
	res[x] = NULL;
	return (res);
}
