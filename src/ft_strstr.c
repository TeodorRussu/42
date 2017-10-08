/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trussu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:23:57 by trussu            #+#    #+#             */
/*   Updated: 2017/07/18 12:11:03 by trussu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*subsecventa;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0] && str[i + 1] == to_find[1])
		{
			subsecventa = str + i;
			j = 0;
			while (to_find[j] == str[i + j])
			{
				j++;
				if (to_find[j] == '\0')
					return (subsecventa);
			}
		}
		i++;
	}
	return (0);
}
