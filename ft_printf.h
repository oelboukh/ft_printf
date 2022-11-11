/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:55:00 by oelboukh          #+#    #+#             */
/*   Updated: 2022/11/06 18:00:32 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		print_format(const char c, va_list args, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putchar(char c, int *len);
void	ft_unbr(unsigned int nb, int *len);
void	printhex(unsigned int x, int *len);
int		ft_uphex(unsigned int nb, int *len);
void	print_add(size_t nb, int *len);

#endif
