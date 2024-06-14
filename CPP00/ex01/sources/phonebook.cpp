#include "phonebook.hpp"

void	Phonebook::add_contact()
{
	Contact new_contact;

	new_contact.make_contact();
	contacts[index++] = new_contact;
	if (index == 8)
	{
		index = 0;
		full = true;
	}
}

void	Phonebook::display_all()
{
	for (int i = 0; i < 8 && (full || i < index); i++)
		contacts[i].print_info(i + 1);
}