/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:53:27 by febasma           #+#    #+#             */
/*   Updated: 2023/10/31 12:31:50 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*tmp;

	if (!list || !del)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		ft_lstdelone(*list, del);
		*list = tmp;
	}
}
