/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:15:37 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/28 11:56:08 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(const char *f, int i, int count, va_list ap)
{
	if (f[i] == 'c')
		count = ft_char(va_arg(ap, int));
	else if (f[i] == 's')
		count = ft_str_print(va_arg(ap, char *));
	else if (f[i] == 'p')
		count = ft_p_printf(va_arg(ap, unsigned long long int));
	else if (f[i] == 'd')
		count = ft_d_i_printf(va_arg(ap, int));
	else if (f[i] == 'i')
		count = ft_d_i_printf(va_arg(ap, int));
	else if (f[i] == 'u')
		count = ft_u_printf(va_arg(ap, int));
	else if (f[i] == 'x')
		count = ft_x_printf(va_arg(ap, int));
	else if (f[i] == 'X')
		count = ft_X_printf(va_arg(ap, int));
	else if (f[i] == '%')
	{
		ft_char('%');
		count++;
	}
	return (count - 2);
}

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		i;
	int		res;

	res = 0;
	i = 0;
	if (!f)
		return (0);
	va_start(ap, f);
	while (f[i])
	{
		if (f[i] == '%' && f[i + 1] != '\0')
		{
			res += ft_check_type(f, ++i, 0, ap);
			i++;
		}
		else if (f[i] != '%')
			ft_putchar(f[i++]);
		else
			i++;
	}
	va_end(ap);
	return (res + i);
}
