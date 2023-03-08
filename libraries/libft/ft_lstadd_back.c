/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:53:34 by wangthea          #+#    #+#             */
/*   Updated: 2023/01/06 18:43:37 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
	{
		*lst = nw;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nw;
}
