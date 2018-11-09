/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 11:35:52 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/22 11:26:34 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 1)
		return (0);
	while (argv[i])
	{
		i++;
	}
	i--;
	while (argv[i])
	{
		if (i == 0)
			return (0);
		ft_putstr(argv[i]);
		i--;
		ft_putchar('\n');
	}
	return (0);
}
