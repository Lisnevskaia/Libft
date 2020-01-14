/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:53:54 by ccred             #+#    #+#             */
/*   Updated: 2019/11/14 13:56:05 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *test;

	test = (char*)malloc(ft_strlen(s) + 1);
	if (test)
	{
		ft_strcpy(test, s);
		return (test);
	}
	return (NULL);
}
