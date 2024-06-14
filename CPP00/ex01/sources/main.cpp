/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 09:32:25 by ecastong          #+#    #+#             */
/*   Updated: 2024/06/14 18:48:35 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int argc, char **argv)
{
	Phonebook	book;

	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.add_contact();
	book.display_all();
	(void) argc;
	(void) argv;
}
