/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibour <support@toujoustudios.net>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:07:09 by ibour             #+#    #+#             */
/*   Updated: 2024/11/04 21:52:52 by ibour            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/include/libft.h"
# include <stdlib.h>

typedef struct s_stack
{
	long			num;
	long			index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

void	ft_free(t_stack **stack);

#endif