/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbattal <rbattal@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:11:09 by rbattal           #+#    #+#             */
/*   Updated: 2023/03/22 22:28:20 by rbattal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

void	signalcatcher(int signal)
{
	static unsigned char	total;
	static int				ref = 128;

	if (signal == SIGUSR2)
		total += ref;
	ref /= 2;
	if (ref == 0)
	{
		write (1, &total, 1);
		ref = 128;
		total = 0;
	}
}

void	printpid(int n)
{
	char	c;

	if (n >= 10)
		printpid(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int	main(void)
{
	printpid(getpid());
	write(1, "\n", 1);
	signal (SIGUSR1, signalcatcher);
	signal (SIGUSR2, signalcatcher);
	while (1)
		pause();
	return (0);
}
