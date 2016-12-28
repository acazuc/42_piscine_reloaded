/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:59:42 by acazuc            #+#    #+#             */
/*   Updated: 2016/12/28 17:01:08 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		result;
	int		i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			++result;
		++i;
	}
	return (result);
}