#include <unistd.h>

int		main(int ac, char **av)
{
	int i = 0;
	int k = 0;
	int e = 1;
	int b = 0;

	if (ac > 1)
	{
		ac--;
		while (ac > 0)
		{
			while (av[ac][i])
			{
				if (av[ac][i] == 'K')
					k = 1;
				if (av[ac][i] == 'B')
					b = 1;
				if (av[ac][i] == 'T' || av[ac][i] == 'P')
					e = 0;
				i++;
			}
			i = 0;
			ac--;
		}
		if ( k && e && b)
			write(1, "Success",7);
		else
			write(1, "Fail", 4);
	}
	write(1, "\n", 1);
	return (0);

}
