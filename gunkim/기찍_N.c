/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   기찍_N.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:13:46 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/19 19:18:36 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	unsigned int		num;

	scanf("%d", &num);
	while (num)
	{
		printf("%d\n", num);
		num--;
	}
	return (0);
}
