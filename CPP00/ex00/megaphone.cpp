#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	char	c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			c = argv[i][j];
			if (islower(c) != 0)
				c -= 32;
			std::cout << c;
		}
	}
	return (EXIT_SUCCESS);
}