/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alla <alkonsta@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:17:12 by alla              #+#    #+#             */
/*   Updated: 2026/10/05 22:10:55 by alla             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../../libft.h"
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <bsd/string.h>

# define GREEN "\033[32m"
# define RED   "\033[31m"
# define RESET "\033[0m"

void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_strlen(void);
void	test_memset(void);
void	test_bzero(void);

#endif
