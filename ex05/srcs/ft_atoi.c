/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:17:57 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 11:22:14 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_number(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	is_num = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		is_num = 1;
		i++;
	}
	return (is_num && str[i] == '\0');
}

int	get_int(char *str, int i, int sign)
{
	int	div;
	int	result;
	int	end;

	result = 0;
	end = i;
	while (str[end] != '\0' && str[end] >= '0' && str[end] <= '9')
	{
		end++;
	}
	div = 1;
	while (str[end -1] >= '0' && str[end - 1] <= '9')
	{
		result = result - ((str[end - 1] - '0') * div);
		div *= 10;
		end--;
	}
	return (result * sign * -1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (get_int(str, i, sign));
}
