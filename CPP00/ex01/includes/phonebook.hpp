#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <string>
# include <iostream>
# include <cstring>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

private:
	void	print_field(std::string string);

public:
	void	make_contact();
	void	print_info(int index);
};

class Phonebook
{
private:
	int		index;
	bool	full;
	Contact	contacts[8];

public:
	void	add_contact();
	void	display_all();
};

#endif