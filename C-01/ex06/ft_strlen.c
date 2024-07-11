/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   < ft_strlen.c >                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 07:28:41 by ibour             #+#    #+#             */
/*   Updated: 2024/07/11 07:28:41 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		size;
	char	c;

	size = 0;
	c = *str;
	while (c != '\0')
	{
		c = *str;
		size++;
		str++;
	}
	return (size - 1);
}
