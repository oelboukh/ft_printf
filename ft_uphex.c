/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:21:50 by oelboukh          #+#    #+#             */
/*   Updated: 2022/11/06 17:24:03 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uphex(unsigned int nb, int *len)
{
	int		i;
	char	*str;

	str = "0123456789ABCDEF";
	i = 0;
	if (nb >= 16)
		ft_uphex(nb / 16, len);
	ft_putchar(str[nb % 16], len);
	return (i);
}
