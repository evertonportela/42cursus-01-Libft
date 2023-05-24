/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:04:10 by evportel          #+#    #+#             */
/*   Updated: 2023/05/24 10:48:10 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*str;
	char	character;

	str = (char *) s;
	character = (char) c;
	index = 0;
	while (index < n)
	{
		if (str[index] == character)
		{
			return ((void *)str + index);
		}
		index++;
	}
	return (NULL);
}
