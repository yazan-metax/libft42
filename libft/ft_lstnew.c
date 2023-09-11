/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazan <yazan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:53:56 by yazan             #+#    #+#             */
/*   Updated: 2023/08/28 17:13:13 by yazan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;
	
	node = (t_list *)malloc(sizeof(t_list));
	if(!node)
		exit(EXIT_FAILURE);
	node->next = 0;
	node->content =content;
	return(node);
}