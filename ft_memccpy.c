/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:45:04 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/09 19:22:46 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	tab1 = (unsigned char *)src;
	tab2 = (unsigned char *)dest;
	i = 0;
	while (i != n)
	{
		tab2[i] = tab1[i];
		if (tab1[i] == c)
			return (dest);
		i++;
	}
	return (NULL);
}
