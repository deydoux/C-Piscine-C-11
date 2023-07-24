/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:57:13 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/24 19:04:33 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int	put_stop(int is_division)
{
	if (is_division)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putstr("Stop : modulo by zero\n");
	return (1);
}

void	put_result(int result)
{
	ft_putnbr(result);
	ft_putstr("\n");
}

int	main(int argc, char **argv)
{
	int		val1;
	int		val2;
	int		result;
	char	*op;

	if (argc != 4)
		return (2);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	result = 0;
	op = argv[2];
	if (ft_strlen(op) == 1)
	{
		if (val2 == 0 && (op[0] == '/' || op[0] == '%'))
			return (put_stop(op[0] == '/'));
		if (op[0] == '+' || op[0] == '-')
			result = val1 + (val2 * ((op[0] == '+') - (op[0] == '-')));
		else if (op[0] == '/')
			result = val1 / val2;
		else if (op[0] == '*')
			result = val1 * val2;
		else if (op[0] == '%')
			result = val1 % val2;
	}
	put_result(result);
}
