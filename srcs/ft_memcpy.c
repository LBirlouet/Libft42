/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:30:43 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/12 15:32:07 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	*cpy;

	i = 0;
	ret = (unsigned char *)dest;
	cpy = (unsigned char *)src;
	while (n > 0)
	{
		ret[i] = cpy[i];
		i++;
		n--;
	}
	return ((char *)ret + i);
}