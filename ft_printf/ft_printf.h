/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 00:26:19 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/06 14:53:39 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	    ft_printf(const char *s, ...);
void	ft_putnbr_base(int nbr, char *base);
void    ft_putuns(unsigned int n, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif
