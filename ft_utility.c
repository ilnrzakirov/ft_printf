/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:15:58 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/28 11:56:06 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoadec(int n)
{
	int		len;
	char	*n2;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = len_number(n);
	n2 = (char *)malloc(sizeof(char) * (len + 1));
	if (n2 == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		n2[0] = '-';
	}
	n2[len--] = '\0';
	while (n / 10 > 0)
	{
		n2[len--] = (n % 10) + '0';
		n /= 10;
	}
	n2[len] = (n % 10) + '0';
	return (n2);
}

void	reverse(char *s)
{
	int	ib;
	int	ie;
	int	c;

	ib = 0;
	ie = ft_strlen(s);
	if (ie == 1)
		return ;
	while (ib < ie)
	{
		c = s[ib];
		s[ib++] = s[--ie];
		s[ie] = c;
	}
}

char	*ft_itoahex(unsigned int num, char x)
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
		else if (x == 'X')
			tmp = tmp + 55;
		else
			tmp = tmp + 87;
		hex[i++] = tmp;
		num = num / 16;
	}
	hex[i] = '\0';
	reverse(hex);
	return (ft_strdup(hex));
}

int	len_number(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoau(unsigned int n)
{
	int		len;
	char	*n2;

	len = len2_number(n);
	n2 = (char *)malloc(sizeof(char) * (len + 1));
	if (n2 == NULL)
		return (NULL);
	n2[len--] = '\0';
	while (n / 10 > 0)
	{
		n2[len--] = (n % 10) + '0';
		n /= 10;
	}
	n2[len] = (n % 10) + '0';
	return (n2);
}
