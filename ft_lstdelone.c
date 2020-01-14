/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:44:48 by ccred             #+#    #+#             */
/*   Updated: 2019/11/14 13:34:57 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;

	if (alst != NULL)
	{
		new = *alst;
		del((new->content), (new->content_size));
		free(*alst);
		*alst = NULL;
	}
}
