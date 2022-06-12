#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

int	main()
{
	int i = -1;
	while (++i <= 100)
	{
		if (!(i % 3))
			write(1, "fizz", 4);
		if (!(i % 5))
			write(1, "buzz", 4);
		if (i % 3 && i % 5)
			ft_putnbr(i);
		write (1, "\n", 1);
	}
}
