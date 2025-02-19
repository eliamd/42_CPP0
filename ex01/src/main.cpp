/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:17:04 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/19 14:49:03 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <limits>

int main()
{
	PhoneBook phonebook;
	std::string command;
	std::string first_name, last_name, nickname, darkest_secret, phone_number;
	int index;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

		if (command == "ADD")
		{
			Contact newContact;

			std::cout << "Enter first name: ";
			std::getline(std::cin >> std::ws, first_name);
			newContact.set_first_name(first_name);

			std::cout << "Enter last name: ";
			std::getline(std::cin >> std::ws, last_name);
			newContact.set_last_name(last_name);

			std::cout << "Enter nickname: ";
			std::getline(std::cin >> std::ws, nickname);
			newContact.set_nickname(nickname);

			std::cout << "Enter darkest secret: ";
			std::getline(std::cin >> std::ws, darkest_secret);
			newContact.set_darkest_secret(darkest_secret);

			std::cout << "Enter phone number: ";
			std::getline(std::cin >> std::ws, phone_number);
			newContact.set_phone_number(phone_number);

			phonebook.add_contact(newContact);
		}
		else if (command == "SEARCH")
		{
			phonebook.display_contacts();
			std::cout << "Enter index: ";
			std::cin >> index;

			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid input. Please enter a number." << std::endl;
			}
			else
			{
				phonebook.search_contact(index);
			}
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Unknown command. Please enter ADD, SEARCH, or EXIT." << std::endl;
		}
	}
	return 0;
}
