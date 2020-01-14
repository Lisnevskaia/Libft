/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:27:44 by ccred             #+#    #+#             */
/*   Updated: 2019/11/14 14:02:32 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*test;

	i = 0;
	test = (char*)malloc(size + 1);
	if (!test)
		return (NULL);
	while (i <= size)
	{
		test[i] = 0;
		i++;
	}
	test[i] = '\0';
	return (test);
}
