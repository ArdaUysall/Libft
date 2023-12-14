/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auysal <auysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:15:04 by auysal            #+#    #+#             */
/*   Updated: 2023/07/04 13:15:06 by auysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*str;

	total_size = count * size;
	str = malloc(total_size);
	if (str == NULL)
		return (NULL);
	else
		ft_memset (str, 0, total_size);
	return (str);
}
