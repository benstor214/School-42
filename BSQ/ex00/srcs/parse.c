/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:47:28 by ibour             #+#    #+#             */
/*   Updated: 2024/07/30 13:47:29 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_bool parse_grid(int fd, t_grid *grid)
{
    char    *content;
    UINT    total;
    UINT    index;

    grid->map = 0;
    if (!read_full(fd, &content, &total))
        return (false);
	grid->src = content;
	index = 0;
	while (index < total) {
		if (content[index] == '\n') {
			// todo fix
			if (!ft_parse_header_line(grid, file_content, index))
				return (false);
			if (!(grid->map = malloc(sizeof(char *) * grid->h)))
				return (false);
			return (ft_process_lines(grid, index + 1, file_content, total));
		}
		index++;
	}
	return (false);

}