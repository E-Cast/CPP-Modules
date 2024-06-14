#include "phonebook.hpp"

void	Contact::make_contact()
{
	std::string	tmp;

	std::cout << "Enter contact information" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, tmp);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, tmp);
}

void	Contact::print_field(std::string string)
{
	int	length;

	length = string.length();
	for (int i = 0; i <= 9 && i <= length; i++)
	{
		if (i == 9 && length > 10)
			std::cout << ".";
		else
			std::cout << string[i];
	}
	for (int spc_count = 10 - length; spc_count > 0; spc_count--)
		std::cout << " ";
}

void Contact::print_info(int index)
{
	std::cout << "|" << index << "         |" ;
	print_field(first_name);
	std::cout << "|" ;
	print_field(last_name);
	std::cout << "|" ;
	print_field(nickname);
	std::cout << "|" << std::endl;
}
