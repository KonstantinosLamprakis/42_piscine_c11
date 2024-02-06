/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:51:25 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/06 12:39:52 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*key;
	int		j;

	if (!tab[0])
		return ;
	i = 1;
	while (tab[i])
	{
		key = tab[i];
		j = i - 1;
		while (j >= 0 && cmp(tab[j], key) > 0)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;
		i++;
	}
}

// #include <stdio.h>
// int	ft_strlength(char *str)
// {
// 	int	i;
// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }
// int	cmp(char *s1, char *s2)
// {
// 	int	i;
// 	int	k1;
// 	int	k2;
// 	i = 0;
// 	k1 = ft_strlength(s1);
// 	k2 = ft_strlength(s2);
// 	return (k1 - k2);
// }
// int	main(void)
// {
// 	int	i;
// 	char *tab[17] = {"srufRkXm04U", "EN6YoCn7U4", "NkPfrnHCLq75", "dJw", "7",
//"Dbo", "X3mDhv", "nUg1p5q", "Bnz9", "WaGM", "yiw", "wKTxjX", "3142j8ZNOF",
//"Qk7sNw1H", "hnDx", "Nc", NULL};
// 	ft_advanced_sort_string_tab(tab + 1, cmp);
// 	ft_advanced_sort_string_tab(tab, cmp);
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("tab[%d] = %s\n", i, tab[i]);
// 		i++;
// 	}
// }