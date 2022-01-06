/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:15:07 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/28 11:58:00 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d_i_printf(int n)
{
	int		i;
	char	*p;

	p = ft_itoadec(n);
	i = ft_putstr(p);
	free(p);
	return (i);
}

int	ft_x_printf(unsigned int n)
{
	int		i;
	char	*p;

	p = ft_itoahex(n, 'x');
	i = ft_putstr(p);
	free(p);
	return (i);
}

int	ft_X_printf(unsigned int n)
{
	int		i;
	char	*p;

	p = ft_itoahex(n, 'X');
	i = ft_putstr(p);
	free(p);
	return (i);
}

int	ft_p_printf(unsigned long long int ptr)
{
	int		i;
	char	*p;

	ft_putstr("0x");
	p = ft_itoa_p(ptr);
	i = ft_putstr(p);
	free(p);
	return (i + 2);
}

int	ft_u_printf(unsigned int n)
{
	int		i;
	char	*p;

	p = ft_itoau(n);
	i = ft_putstr(p);
	free(p);
	return (i);
}
