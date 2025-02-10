/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:18:22 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/10 10:51:34 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

/* ------------------------------- Constructor ------------------------------ */

PhoneBook::PhoneBook() {
	this->amount_of_contacts = 0;
}

/* -------------------------------- Functions ------------------------------- */

void PhoneBook::add_contact(Contact contact)
{
	if (this->get_amount_of_contacts() < MAX_CONTACTS)
	{
		this->contacts[this->get_amount_of_contacts()] = contact;
		this->set_amount_of_contacts(this->get_amount_of_contacts() + 1);
		std::cout << "Contact added successfully" << std::endl;
	}
	else
	{
		this->contacts[MAX_CONTACTS - 1] = contact;
		std::cout << "Phonebook is full" << std::endl;
		std::cout << "Older 8th Contact deleted, and new contact added successfully" << std::endl;
	}
}

std::string formatField(const std::string &s) {
	if (s.size() > 10)
		return s.substr(0, 9) + ".";
	else
		return std::string(10 - s.size(), ' ') + s;
}

void PhoneBook::display_contacts()
{
	std::cout << "|" << formatField("Index")
			  << "|" << formatField("First Name")
			  << "|" << formatField("Last Name")
			  << "|" << formatField("Nickname") << "|" << std::endl;

	for (int i = 0; i < this->amount_of_contacts; i++) {
		std::string idx = formatField(std::to_string(i));
		std::string first = formatField(this->contacts[i].get_first_name());
		std::string last  = formatField(this->contacts[i].get_last_name());
		std::string nick  = formatField(this->contacts[i].get_nickname());
		std::cout << "|" << idx << "|" << first << "|" << last << "|" << nick << "|" << std::endl;
	}
}

void PhoneBook::search_contact(int index)
{
	if (index >= 0 && index < this->amount_of_contacts)
	{
		std::cout << "First Name: " << this->contacts[index].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contacts[index].get_nickname() << std::endl;
		std::cout << "Darkest Secret: " << this->contacts[index].get_darkest_secret() << std::endl;
		std::cout << "Phone Number: " << this->contacts[index].get_phone_number() << std::endl;
	}
	else
	{
		std::cout << "Invalid index" << std::endl;
	}
}

/* --------------------------------- Getters -------------------------------- */
int PhoneBook::get_amount_of_contacts()
{
	return (this->amount_of_contacts);
}

/* --------------------------------- Setters -------------------------------- */
void PhoneBook::set_amount_of_contacts(int amount_of_contacts)
{
	this->amount_of_contacts = amount_of_contacts;
}