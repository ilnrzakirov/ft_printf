/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:15:29 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/28 11:56:10 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_str_print(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	i = ft_putstr(s);
	return (i);
}

int	len2_number(unsigned int n)
{
	int	i;

	i = 0;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa_p(unsigned long long int num)
{
	int		i;
	int		tmp;
	char	hex[100];

	i = 0;
	if (num == 0)
		hex[i++] = '0';
	while (num != 0)
	{
		tmp = num % 16;
		if (tmp < 10)
			tmp = tmp + 48;
		else
			tmp = tmp + 87;
		hex[i++] = tmp;
		num = num / 16;
	}
	hex[i] = '\0';
	reverse(hex);
	return (ft_strdup(hex));
}
