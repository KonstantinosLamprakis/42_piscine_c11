/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:40:23 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 17:05:49 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	op_plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putstr("\n");
}

void	op_minus(int a, int b)
{
	ft_putnbr(a - b);
	ft_putstr("\n");
}

void	op_mult(int a, int b)
{
	ft_putnbr(a * b);
	ft_putstr("\n");
}

void	op_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	ft_putnbr(a / b);
	ft_putstr("\n");
}

void	op_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	ft_putnbr(a % b);
	ft_putstr("\n");
}
