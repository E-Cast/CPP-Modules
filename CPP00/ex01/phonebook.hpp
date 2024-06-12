#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <string>

class Contact
{
	int			index;
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact()
	{

	}
};

// class PhoneBook{
// public:
// 	Contacts[8];
// };

#endif