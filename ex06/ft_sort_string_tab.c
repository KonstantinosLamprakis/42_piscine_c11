/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:51:20 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 10:08:04 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-1);
	}
	return (1);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		min;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		min = i;
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[j], tab[min]) < 0)
				min = j;
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	char *tab[7] = {"abcd", "test2", "desdv", "aaaaa", ".a.sf", "zdfas", NULL};
// 	ft_sort_string_tab(tab);
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s ", tab[i]);
// 		i++;
// 	}
// }