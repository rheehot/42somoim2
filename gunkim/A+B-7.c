/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A+B-7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:15:59 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/12 18:16:29 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		T;
	int		a;
	int		b;
	int		i;
	int		*tab;

	scanf("%d", &T);
	tab = (int *)malloc(sizeof(int) * T);
	i = 0;
	while (i < T)
	{
		scanf("%d %d", &a, &b);
		tab[i] = a + b;
		i++;
	}
	i = 0;
	while (i < T)
	{
		printf("Case #%d: %d\n", i + 1, tab[i]); 
		i++;
	}
	free(tab);
	return (0);
}
