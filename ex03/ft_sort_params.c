/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:23:58 by mdumergu          #+#    #+#             */
/*   Updated: 2022/08/01 14:29:14 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
i

/*void    ft_sort_int_tab(int *tab, int size)
{
    int    i;
    int    j;
    int    temp;

    i = 0;
    temp = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}*/

int	main(int argc, char **argv)
{
    int	i;
    int	i_arg;
    char	*c;

    i = 0;
	c = 0;
    while (i < argv)
    {
		i_arg = i + 1;
        while (i_arg < argv)
        {
			if (argc[i] > argc[i_arg])
			{
				c = i_arg[i];
				argc[i] = argc[i_arg];
				argc[i_arg] = c; 
            }
			i_arg++;
		}
        i++;
    }
	return (0);
}
