/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:57:49 by ccred             #+#    #+#             */
/*   Updated: 2019/11/14 13:28:24 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;
	t_list	*tmp;

	new = *alst;
	while (new)
	{
		tmp = new->next;
		del((new->content), (new->content_size));
		free(new);
		new = tmp;
	}
	*alst = NULL;
}
