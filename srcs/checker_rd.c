/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:15:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/04/13 20:35:16 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void checker_pars(t_stack **a, t_stack **b, int len, char *line)
{
    if (line[0] == '\0')
    {
        if (check_sort(a, len) == 1)
            ft_putstr_fd("OK\n", 1);
        else
            ft_putstr_fd("KO\n", 1);
        the_end(a, b, &line, len);
    }
    else if (!ft_strcmp(line, "sa") && size_list(*a) > 1)
        swap_stack(a);
    else if (!ft_strcmp(line, "ra") && size_list(*a) > 1)
        r_stack(a);
    else if (!ft_strcmp(line, "rra") && size_list(*a) > 1)
        rr_stack(a);
    else if (!ft_strcmp(line, "sb") && size_list(*b) > 1)
        swap_stack(b);
    else if (!ft_strcmp(line, "rb") && size_list(*b) > 1)
        r_stack(b);
    else if (!ft_strcmp(line, "rrb") && size_list(*b) > 1)
        rr_stack(b);
    else if (!ft_strcmp(line, "pb") && size_list(*a) > 1)
        push_stack(a, b);
    else if (!ft_strcmp(line, "pa") && size_list(*b) > 1)
        push_stack(b, a);
    else if (!ft_strcmp(line, "ss"))
        ss(a, b);
    else if (!ft_strcmp(line, "rr"))
        rr(a, b);
    else if (!ft_strcmp(line, "rrr"))
        rrr(a, b);
    print_all(*a, *b);
}