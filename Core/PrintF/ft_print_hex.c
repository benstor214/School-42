/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   < ft_print_hex.c >                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 23:31:41 by ibour             #+#    #+#             */
/*   Updated: 2024/08/31 23:31:41 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int num, int *i, char *base)
{
	char	*str;

	str = ft_num_base(num, base);
	ft_print_str(str, i);
	free(str);
}
