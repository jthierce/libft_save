/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:29:16 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/16 17:44:21 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}