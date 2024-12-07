/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakhmouc <oakhmouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 00:25:53 by oakhmouc          #+#    #+#             */
/*   Updated: 2024/12/06 14:30:12 by oakhmouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

int ft_printf(const char *s, ...)
{
    va_list str;
    int i;
    char *str1;

    i = 0;
    va_start(str, s);
    str1 = va_arg(str, char *);
    while (str1[i])
    {
        while (str1[i++] != '%')
            ft_putchar_fd(str[i], 1);
        if (str1[++i] == 's')
            ft_putstr_fd(va_arg(str, char *), 1);
        else if (str1[++i] == 'c')
            ft_putchar_fd(va_arg(str, char), 1);
        else if (str1[++i] == 'd' || str1[i++] == 'i')
            ft_putnbr_fd(va_arg(str, int), 1);
        else if (str1[++i] == 'x')
            ft_putnbr_base(va_arg(str, int), "0123456789abcdef");
        else if (str1[++i] == 'X')
            ft_putnbr_base(va_arg(str, int), "0123456789ABCDEF");
        else if (str1[++i] == 'u')
            ft_putuns(va_arg(str, unsigned int), 1);
        else if (str1[++i] == 'p')
            ft_putnbr_base(va_arg(str, int), "0123456789abcdef");
        else if (str1[++i] == '%')
            ft_putchar_fd('%', 1);
        i++;
    }
}
