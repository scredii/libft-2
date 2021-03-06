/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 08:28:17 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 04:35:09 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_glstdelone(t_glist **link, void (*del)(void **ct))
{
	if (del != NULL)
		del(&((*link)->content));
	free(*link);
	*link = NULL;
}
