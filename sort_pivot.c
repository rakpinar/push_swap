/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakpinar <rakpinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:54:33 by rakpinar          #+#    #+#             */
/*   Updated: 2023/07/10 19:54:36 by rakpinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_pivot(t_data *p)
{
	int	res;

	while (p->a_size > 2)
	{
		res = ft_array_pivot(p->arr_a, p->a_size);
		if (p->arr_a[p->a_size - 1] < res)
			ft_push(p, 'b');
		else
			ft_rotate(p, 'a');
	}
}

int	ft_array_pivot(int *arr, int size)
{
	unsigned long long	sum;
	int					i;

	i = 0;
	sum = 0;
	while (i < size)
		sum += arr[i++];
	return (sum / size);
}
