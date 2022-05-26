/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:34:15 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/05/26 18:19:13 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "ft_printf/libft/libft.h"
#include "ft_printf/includes/ft_printf.h"

void print_stack(t_list *stack);
void sa(t_list *stack_a);
void sb(t_list *stack_b);
void ss(t_list *stack_a, t_list *stack_b);
t_list	*pop_node(t_list **lst, t_list *node);
void pa(t_list **stack_a, t_list **stack_b);
void pb(t_list **stack_a, t_list **stack_b);
void ra(t_list **stack_a);
void rb(t_list **stack_b);
void rr(t_list **stack_a, t_list **stack_b);
void rra(t_list **stack_a);
void rrb(t_list **stack_b);
void rrr(t_list **stack_a, t_list **stack_b);
void	free_list(t_list *lst);

#endif