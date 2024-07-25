/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:13:56 by ibour             #+#    #+#             */
/*   Updated: 2024/07/25 15:13:56 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return (i);
}
