/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trussu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:06:20 by trussu            #+#    #+#             */
/*   Updated: 2017/07/18 12:06:26 by trussu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c) {

	if (c < 65)
		return (0);
	if (c > 90 && c < 97)
		return (0);
	if (c > 122)
		return (0);
	return (1);
}
