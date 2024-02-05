/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:16:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 16:52:58 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_asc;
	int	is_desc;

	i = 0;
	is_asc = 1;
	is_desc = 1;
	while (i < length - 1 && (is_desc || is_asc))
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			is_asc = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			is_desc = 0;
		i++;
	}
	return (is_desc || is_asc);
}

// #include <stdio.h>
// int	func(int x, int y)
// {
// 	return (x - y);
// 	return (0);
// }
// int	main(void)
// {
// 	// int	arr[10] = {1, 2, 2, 2, 5, 7, 8, 9, 10, 199};
// 	int	arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 0, -10};
// 	printf("%d ", ft_is_sort(arr, 10, func));
// }