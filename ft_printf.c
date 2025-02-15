/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:04:40 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/02 20:20:25 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_specifier(char c, va_list *ap)
{
	if (!ap)
		return (0);
	else if (c == 'c')
		return (ft_putchar_fd(va_arg(*ap, int), STD_OUT));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(*ap, char *), STD_OUT));
	else if (c == 'p')
		return (ft_putptr_fd(va_arg(*ap, void *), STD_OUT));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(*ap, int), STD_OUT));
	else if (c == 'u')
		return (ft_putunbr_fd(va_arg(*ap, unsigned int), STD_OUT));
	else if (c == 'x')
		return (ft_puthex_fd(va_arg(*ap, unsigned long),
				LOWERCASE_SELECTOR, STD_OUT));
	else if (c == 'X')
		return (ft_puthex_fd(va_arg(*ap, unsigned long),
				UPPERCASE_SELECTOR, STD_OUT));
	else if (c == '%')
		return (ft_putchar_fd('%', STD_OUT));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_handle_specifier(*(++format), &ap);
		else
			count += write(STD_OUT, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
